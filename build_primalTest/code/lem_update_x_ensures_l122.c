
#include "primalTest.h"



/*@
    axiomatic axioms_update_x_ensures_l122
    {
        axiom update_x_ensures_l1221:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat ax; (
                            (\forall LMat dx; (
                                (\forall real t; (((acc(A, b, c, t, ax, (0.25)))==>(((norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax))<=((0.25)))))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom update_x_ensures_l1222:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat ax; (
                            (\forall LMat dx; (
                                (\forall real t; (((((norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax))<=((0.25))))==>(((omega(norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax)))<=(omega((0.25))))))
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
    lemma update_x_ensures_l122:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat ax; (
                        (\forall LMat dx; (
                            (\forall real t; (((acc(A, b, c, t, ax, (0.25)))==>(((omega(norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax)))<=(omega((0.25))))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/