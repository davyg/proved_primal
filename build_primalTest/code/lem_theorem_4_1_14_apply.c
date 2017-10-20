
#include "primalTest.h"



/*@
    axiomatic axioms_theorem_4_1_14_apply
    {
        axiom theorem_4_1_14:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat ax; (
                            (\forall LMat xp; (
                                (\forall real t; (((((xp)==(mat_add(ax, mat_scal(mat_mult(inv(hess(A, b, ax)), mat_add(grad(A, b, ax), mat_scal(c, t))), (-1.0))))))==>(((((norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax))<((1.0))))==>(((norm(A, b, mat_add(grad(A, b, xp), mat_scal(c, t)), xp))<=(omega(norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax))))))))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
    }
*/



/*@
    lemma theorem_4_1_14_apply:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat ax; (
                        (\forall LMat xp; (
                            (\forall real t; (((((xp)==(mat_add(ax, mat_scal(mat_mult(inv(hess(A, b, ax)), mat_add(grad(A, b, ax), mat_scal(c, t))), (-1.0))))))==>(((((norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax))<((1.0))))==>(((norm(A, b, mat_add(grad(A, b, xp), mat_scal(c, t)), xp))<=(omega(norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax))))))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/