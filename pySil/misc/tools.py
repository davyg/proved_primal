import logging, sys, time

def Sum(start, end, f):
    s = Real.var("sum")
    s %= Real.Cst(0)
    with For(start, end) as k:
        s += f(k)

def activateOutput():
    global OUTPUT
    OUTPUT = True

OUTPUT = False

def outputInfo(*args, direct=False, sameLine=False):
    if OUTPUT:
        x = ("\r" if sameLine else "") + " ".join(map(str, args))
        if not direct:
            logging.info(x)
        sys.stdout.write(x + ("" if direct else "\n"))
        sys.stdout.flush()


class Job:
    indent = -1
    def __init__(self, *args):
        self.args = args
        self.result = "done"
    def __enter__(self):
        outputInfo("|  "*max(Job.indent, 0) + ("|--" if Job.indent > -1 else "") + "+", *self.args)
        Job.indent += 1
        self.indent = Job.indent
        self.t = time.time()
        return self
    def set_result(self, result):
        self.result = result
    def __exit__(self, a, b, c):
        self.dt = time.time()-self.t
        assert(Job.indent == self.indent)
        outputInfo("|  "*Job.indent + "|__ " + self.result + " in {:.3f}".format(self.dt) + "s")
        outputInfo("|  "*max(Job.indent, 0))
        Job.indent -= 1

class SimpleTimedJob:
    def __init__(self, *args):
        self.args = args
        self.result = "done"
    def __enter__(self):
        outputInfo("|  "*Job.indent + "|-->", *self.args, direct=True)
        self.t = time.time()
        return self
    def set_result(self, result):
        self.result = result
    def __exit__(self, a, b, c):
        self.dt = time.time()-self.t
        outputInfo(" {0} in {1:8.3f}s".format(self.result, self.dt))

def simpleJob(*args, **kargs):
    outputInfo("|  "*Job.indent + "|-->", *args, **kargs)

class Timer:
    def __init__(self, msg):
        self.name = "myclock"
        self.var = Real.Var(msg)
        self.retType = Real
        self.args = []
    
    def __enter__(self):
        self.var %= self()
        return self.var
    
    def __exit__(self, a, b, c):
        self.var %= self() - self.var

    def __call__(self):
        return Real.Call(self)

    def assigns(self, funs):
        return [self.var.getModifiedVar()]

def mat2str(M, N, get, fmt="> 6.3f"):
    ret = "--" + 7 * N * " " + "--\n"
    for i in range(M):
        ret += "| "
        for j in range(N):
            y = yield get(i, j)
            ret += ("{:"+fmt+"} ").format(y)
        ret += " |\n"
    ret += "--" + 7 * N * " " + "--\n"
    return ret

def printMat(M, N, get, fmt="> 6.3f"):
    g = mat2str(M, N, get, fmt)
    try:
        res = g.send(None)
        while True:
            res = g.send(res)
    except StopIteration as s:
        sys.stdout.write(str(s.value) + "\n")
    
