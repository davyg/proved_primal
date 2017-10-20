
#include "primalTest.h"



/*@
    axiomatic axioms_update_t_ensures1_l11
    {
        axiom mat_scal_dev:
            (\forall LMat A; (
                (\forall real x; (
                    (\forall real y; (((mat_scal(A, ((x)+(y))))==(mat_add(mat_scal(A, x), mat_scal(A, y))))
                    ))
                ))
            ))
        ;
        axiom Aadd:
            (\forall LMat A; (
                (\forall LMat B; (
                    (\forall LMat C; (((mat_add(mat_add(A, B), C))==(mat_add(A, mat_add(B, C))))
                    ))
                ))
            ))
        ;
    }
*/



/*@
    lemma update_t_ensures1_l11:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real et; (
                            (\forall real dt; ((((TRIGGER:(norm(A, b, mat_add(grad(A, b, x), mat_scal(c, ((et)+(dt)))), x))))==(norm(A, b, mat_add(mat_add(grad(A, b, x), mat_scal(c, et)), mat_scal(c, dt)), x)))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/