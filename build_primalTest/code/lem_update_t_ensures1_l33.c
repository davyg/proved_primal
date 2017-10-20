
#include "primalTest.h"



/*@
    axiomatic axioms_update_t_ensures1_l33
    {
        axiom norm_sep:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat x; (
                        (\forall LMat y; (((((norm(A, b, y, x))==((0.0))))==>(isnull(y)))
                        ))
                    ))
                ))
            ))
        ;
        axiom update_t_ensures1_l331:
            (\forall real x; (((((x)>((0.0))))==>(((((x)*((((0.1388888888888889))/(x)))))==((0.1388888888888889)))))
            ))
        ;
    }
*/



/*@
    lemma update_t_ensures1_l33:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (((((isnull(c))==((0))))==>(((((norm(A, b, c, x))*((((0.1388888888888889))/(norm(A, b, c, x))))))==((0.1388888888888889)))))
                    ))
                ))
            ))
        ))
    ;
*/