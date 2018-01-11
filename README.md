# proved_primal

This repository contains a primal algorithm C implementation solving a
2x5 linear problem.

This algorithm is based on the chapter 4 of
"Introductory Lectures on Convex Optimization" by Yurii Nesterov.

This code is fully annotated with [ACSL](https://frama-c.com/acsl.html)
language and this annotation can be checked with
[Frama-C](https://frama-c.com/index.html),
its WP plugin and [Alt-Ergo](http://alt-ergo.lri.fr/).

To install Frama-C, you can use [Opam](https://opam.ocaml.org/), you
might also need, gcc and graphviz.

You can use

```
make
```
To run a script which checks the annotation with Frama-C/Alt-Ergo, it also
compiles the program and run it.

The code is available in [build_primalTest/code](build_primalTest/code) and the annotations in
[build_primalTest/code/primalTest.h](build_primalTest/code/primalTest.h) and
[build_primalTest/code/primalTest_contracts.h](build_primalTest/code/primalTest_contracts.h)

The linear problem used is :

```python
M = 5
N = 2

A = [
    [ 3, -3],
    [ 1,  1],
    [-5, -1],
    [-1,  2],
    [ 1, -6],
    ]

b = [
    [3],
    [2],
    [5],
    [2],
    [4]
    ]

c = [
    [-1],
    [ 4],
    ]
```
