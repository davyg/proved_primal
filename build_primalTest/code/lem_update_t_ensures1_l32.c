
#include "primalTest.h"



/*@
    axiomatic axioms_update_t_ensures1_l32
    {
        axiom norm_scal:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat x; (
                        (\forall LMat y; (
                            (\forall real k; (((norm(A, b, mat_scal(y, k), x))==(((norm(A, b, y, x))*(k))))
                            ))
                        ))
                    ))
                ))
            ))
        ;
    }
*/



/*@
    lemma update_t_ensures1_l32:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real dt; (((((isnull(c))==((0))))==>(((norm(A, b, mat_scal(c, (((0.1388888888888889))/(norm(A, b, c, x)))), x))==(((norm(A, b, c, x))*((((0.1388888888888889))/(norm(A, b, c, x)))))))))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/