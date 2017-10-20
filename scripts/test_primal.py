from pySil import activateOutput
from pySilOptim import usePrimal

activateOutput()

NAME="primalTest"

usePrimal(NAME, False, None, (1, ), (10, 1, True, 'Ref+Real'))
usePrimal(NAME, False, None, None, (10, 1, True, 'Typed+Real'))

import json

EXPECTED_RESULT="""[
0.400000;
-0.600000;
]
-2.800000
"""

with open("build_"+NAME+"/result", 'r') as f:
    data = f.read()
    if data != EXPECTED_RESULT:
        print("Output from binary incorrect")
        exit(-1)

with open("build_"+NAME+"/proof.json", 'r') as f:
    data = json.load(f)

bad=False
for k, x in data.items():
    if x['type'] in ['lem', 'fun'] and not x['proven']:
        print("{:40} is not proven".format(k[:40]))
        bad=True
if bad:
    print("Some goals are not proven")
    exit(-2)

print("All that was expected is proven")
