
#include "primalTest.h"



/*@
    axiomatic axioms_update_x_ensures_l1
    {
        axiom update_x_ensures_l11:((omega((0.25)))<=((0.1111111111111111)))
        ;
        axiom update_x_ensures_l12:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat ax; (
                            (\forall LMat dx; (
                                (\forall real t; (((acc(A, b, c, t, ax, (0.25)))==>(((((dx)==(mat_scal(mat_mult(inv(hess(A, b, ax)), mat_add(grad(A, b, ax), mat_scal(c, t))), (-1.0)))))==>(((norm(A, b, mat_add(grad(A, b, mat_add(ax, dx)), mat_scal(c, t)), mat_add(ax, dx)))<=(omega((0.25))))))))
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
    lemma update_x_ensures_l1:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat ax; (
                        (\forall LMat dx; (
                            (\forall real t; (((acc(A, b, c, t, ax, (0.25)))==>(((((dx)==(mat_scal(mat_mult(inv(hess(A, b, ax)), mat_add(grad(A, b, ax), mat_scal(c, t))), (-1.0)))))==>(((norm(A, b, mat_add(grad(A, b, mat_add(ax, dx)), mat_scal(c, t)), mat_add(ax, dx)))<=((0.1111111111111111)))))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/