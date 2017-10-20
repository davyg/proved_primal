import sys
import subprocess
import json

from glob import glob
from os import listdir
from os.path import join, exists as fileExists
from lxml import etree

from pySil import *

DEBUG_NBR_GOAL = 0

MAIN = """#include "{}.h"

int main()
{{
    compute();
    printf("[\\n%lf;\\n%lf;\\n]" , pathfollowing_X[(0)], pathfollowing_X[(1)]);
    printf("\\n");
    printf("%lf" , (((((-1.0))*(pathfollowing_X[(0)])))+((((4.0))*(pathfollowing_X[(1)])))));
    printf("\\n");
    return 0;
}}"""


REPORT = """@SUFFIX ".report"
@HEAD
%prop:valid/%prop:total
@END"""

def run(*args, last=[]):
    p = subprocess.Popen(list(args)+last, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    data = p.communicate()
    if p.returncode != 0:
        print("ERROR RUNNING : '"+" ".join(args)+"'")
        print("-"*80)
        print("stdout")
        print("-"*80)
        print(data[0].decode())
        print("-"*80)
        print("stderr")
        print("-"*80)
        print(data[1].decode())
        print("-"*80)
        exit(-1)
    return data[0].decode()

def status(x, n):
    size = str(len(str(n)))
    return ("[{0:"+size+"}/{1:"+size+"}]").format(x, n)

def buildDirTree(output, *dirs):
    simpleJob("Removing {}".format(output))
    run("rm", "-rf", output)

    simpleJob("Making directory {}".format(output))
    run("mkdir", output)
    for d in dirs:
        run("mkdir", d)

def createMainPrimal(name, outputCode):
    simpleJob("Writing main")
    with open(outputCode+"fun_main.c", 'w') as f:
        f.write(MAIN.format(name))

def compilePrimal(option, output, outputCode):
    optim, = option
    with SimpleTimedJob("Compiling"):
        run("gcc", "-o", output+"run", "-O"+str(optim), "-Wall", *glob(outputCode+"*.c"), last=["-lm"])

def runPrimal(output):
    with SimpleTimedJob("Running"):
        data = run(output+"run")
        with open(output+"result", 'w') as f:
            f.write(data)
            
def color(data, col):
    return "\033[1;{0}m{1}\033[0m".format(col, data)

YELLOW=33
GREEN=32
RED=31

def redgreen(valid, notvalid=None, cond=None):
    if notvalid is None:
        notvalid = valid
    if cond is None:
        cond = valid
    return color(valid if cond else notvalid, GREEN if cond else RED)

def provePrimal(proofOption, output, outputCode, outputReport):
    tree = etree.parse(output+"report.xml")
    with Job("Proof"):
        timeout, nbPar, retry, model = proofOption
        conf = outputReport+"/report.conf"
        result_path = output+"proof.json"
        if fileExists(result_path):
            with open(result_path, 'r') as f:
                results = json.load(f)
        else:
            results = {}
        with open(conf, 'w') as f:
            f.write(REPORT)
        codes = sorted([p for p in listdir(outputCode) if p.endswith(".c")])
        provennow = 0
        proven = 0
        ignored = 0
        for i in range(min(DEBUG_NBR_GOAL, len(codes)) if DEBUG_NBR_GOAL else len(codes)):
            fname = codes[i][:-2]
            name = fname.partition('_')[2]
            ignore = tree.xpath("/report/hierarchy/*[@name = '{}']/@ignore".format(name))
            if name in ['main', ''] or (ignore[0] == '1' if ignore else False):
                simpleJob(status(i+1, len(codes)), "{:45}".format(fname[:45]))
                simpleJob("          "+color("Ignored", YELLOW))
                ignored += 1
                continue
            already = False
            if name in results and ((not retry) or results[name]['proven']):
                already = True
                simpleJob(status(i+1, len(codes)), "{:45}".format(fname[:45]))
            else:
                source = join(outputCode, codes[i])
                dest = join(outputReport, fname)
                with SimpleTimedJob(status(i+1, len(codes)), "{:45}".format(fname[:45])) as j:
                    data = run("frama-c", "-wp", source,
                        "-wp-model", model,
                        "-wp-report", conf,
                        "-wp-report-basename", dest,
                        "-wp-prover", "alt-ergo",
                        #"-wp-alt-ergo-opt=-nb-triggers",
                        #"-wp-alt-ergo-opt=4",
                        "-wp-par", str(nbPar),
                        "-wp-timeout", str(timeout),
                        "-wp-rte")
                    #print(data)
                with open(dest + ".report", 'r') as f:
                    lines = f.read().split("\n")
                    assert(len(lines)==2)
                    assert('/' in lines[0])
                    (nbr, tot) = lines[0].split('/')
                    results[name] = {}
                    results[name]['type'] = fname.partition('_')[0]
                    results[name]['nbr'] = 0 if nbr == '-' else int(nbr)
                    results[name]['tot'] = 0 if tot == '-' else int(tot)
                    results[name]['proven'] = (nbr == tot) and (nbr != '-')
                    results[name]['time'] = j.dt
            simpleJob("          {0:55} {1:4}/{2:4}".format(
                redgreen("Already proven" if already else "Proven", "Already failed" if already else "Failed", results[name]['proven']),
                results[name]['nbr'],
                results[name]['tot']))
            if results[name]['proven']:
                if not already:
                    provennow += 1
                proven += 1
        rem = len(codes) - proven - ignored
        simpleJob("{0:3} more proven, total: {1:3}+{2:3}/{3:3} ({4:3} remaining)".format(
            redgreen(provennow),
            color(proven, RED),
            color(ignored, YELLOW),
            len(codes),
            redgreen(rem, cond=rem==0)))

        with open(result_path, 'w') as f:
            json.dump(results, f, indent=4)

def correct(path):
    l, _, r = path.partition('_')
    if l == 'fun':
        return 'function_' + r
    else:
        return 'lemma_' + r

def gen_dot(output):
    result_path = output+"proof.json"
    result_dot = output+"prooftree.dot"
    result_svg = output+"prooftree.svg"
    result_png = output+"prooftree.png"
    with open(result_path, 'r') as f:
        results = json.load(f)

    tree = etree.parse(output+"report.xml")

    simpleJob("Generating proof tree in dot")
    with open(result_dot, 'w') as f:
        f.write("digraph lemma_hierachy {\n")
        for node in tree.xpath("/report/hierarchy/node"):
            name = node.get('name')
            kind = node.get('class')
            ignore = node.get('ignore')
            
            if 'sub' in name:
                continue
            
            style='filled'
            color="#78909C"

            if kind == 'Axiom':
                shape = 'hexagon'
            elif kind == 'Lemma':
                shape = 'oval'
            else:
                shape = "box"
            
            if name in results:
                color = '#00E676' if results[name]['proven'] else '#FF1744'
            if ignore == '1':
                style = 'bold'
            f.write("\t{0} [shape={3}, style = \"{2}\" fontcolor=\"#37474F\" fontname=\"lato\" color = \"{1}\", ];\n\n".format(name, color, style, shape))
            for dep in node:
                f.write("\t{0} -> {1} [color=\"#37474F\", penwidth=2];\n".format(dep.get('name'), name))
            f.write("\n\n\n")
            f.write("graph [label=\"Proof results for primal algorithm\\nNbr files: {pfile}/{nbfile}\\nNbr goals: {pgoal}/{nbgoal}\", fontsize=50]".format(
                pfile=len([x for x in results.values() if x['proven']]),
                nbfile=len(results),
                pgoal=sum([x['nbr'] for x in results.values()]),
                nbgoal=sum([x['tot'] for x in results.values()])))
        f.write("}")
    simpleJob("Exporting proof tree to png")
    run("dot", "-Tpng", "-o", result_png, result_dot)
    simpleJob("Exporting proof tree to svg")
    run("dot", "-Tsvg", "-o", result_svg, result_dot)

        



    


def usePrimal(name, rebuildFlag, genOption, compOption, proofOption):

    output = "build_"+name+'/'
    outputCode = output+'/code/'
    outputReport = output+'/report/'
    
    assert(not rebuildFlag)
    if rebuildFlag:
        buildDirTree(output, outputCode, outputReport)

    assert(not genOption)

    if compOption:
        createMainPrimal(name, outputCode)
        compilePrimal(compOption, output, outputCode)
        runPrimal(output)
    
    if proofOption:
        provePrimal(proofOption, output, outputCode, outputReport)
        gen_dot(output)
            
            
