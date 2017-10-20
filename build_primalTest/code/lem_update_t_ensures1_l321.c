
#include "primalTest.h"



/*@
    axiomatic axioms_update_t_ensures1_l321
    {
        axiom Amat_scal:
            (\forall LMat A; (
                (\forall real x; (
                    (\forall real y; (((mat_scal(mat_scal(A, x), y))==(mat_scal(A, ((x)*(y)))))
                    ))
                ))
            ))
        ;
    }
*/



/*@
    lemma update_t_ensures1_l321:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real dt; (((((isnull(c))==((0))))==>(((norm(A, b, mat_scal(mat_scal(c, (0.1388888888888889)), 1/(norm(A, b, c, x))), x))==(norm(A, b, mat_scal(c, (((0.1388888888888889))*(1/(norm(A, b, c, x))))), x)))))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/