
#include "primalTest.h"



/*@
    axiomatic axioms_update_x
    {
        axiom theorem_4_1_14_apply:
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
        axiom update_x_ensures:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat ax; (
                            (\forall LMat dx; (
                                (\forall real t; (((acc(A, b, c, t, ax, (0.25)))==>(((((dx)==(mat_scal(mat_mult(inv(hess(A, b, ax)), mat_add(grad(A, b, ax), mat_scal(c, t))), (-1.0)))))==>(acc(A, b, c, t, mat_add(ax, dx), (0.1111111111111111))))))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
    }
*/



void update_x()
{
    compute_dx();
    set_pathfollowing_X();
}