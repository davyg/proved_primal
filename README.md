# proved_primal

This repository contains a primal algorithm C implementation solving a
2x5 linear problem.

This algorithm is based on the chapter 4 of
"Introductory Lectures on Convex Optimization" by Yurii Nesterov.

This code is annotated with [ACSL](https://frama-c.com/acsl.html)
language and can be proved using [Frama-C](https://frama-c.com/index.html),
its WP plugin and [Alt-Ergo](http://alt-ergo.lri.fr/).

To run Frama-C, you need to install it thanks to
[Opam](https://opam.ocaml.org/) for example:

```
opam install -y frama-c-base alt-ergo
```

You might also need, gcc and graphviz.

You can use

```
make
```

To run a script checking the annotation.

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
