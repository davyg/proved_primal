mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
current_dir := $(patsubst %/,%,$(dir $(mkfile_path)))

PYTHON=PYTHONPATH=$(PYTHONPATH):$(current_dir) python3

all: primal_test

primal:
	$(PYTHON) python3 scripts/gen_primal.py

tests: python_tests primal_test

python_tests:
	nosetests

primal_test:
	$(PYTHON) scripts/test_primal.py

