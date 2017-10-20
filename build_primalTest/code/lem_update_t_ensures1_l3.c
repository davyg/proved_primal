
#include "primalTest.h"



/*@
    axiomatic axioms_update_t_ensures1_l3
    {
        axiom update_t_ensures1_l31:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat x; (
                            (\forall real dt; (((((dt)==((((0.1388888888888889))/(norm(A, b, c, x))))))==>(((norm(A, b, mat_scal(c, dt), x))==(norm(A, b, mat_scal(c, (((0.1388888888888889))/(norm(A, b, c, x)))), x)))))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom update_t_ensures1_l32:
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
        axiom update_t_ensures1_l33:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat x; (((((isnull(c))==((0))))==>(((((norm(A, b, c, x))*((((0.1388888888888889))/(norm(A, b, c, x))))))==((0.1388888888888889)))))
                        ))
                    ))
                ))
            ))
        ;
    }
*/



/*@
    lemma update_t_ensures1_l3:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real dt; (((((isnull(c))==((0))))==>(((((dt)==((((0.1388888888888889))/(norm(A, b, c, x))))))==>(((norm(A, b, mat_scal(c, dt), x))==((0.1388888888888889)))))))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/