
#include "primalTest.h"



/*@
    axiomatic axioms_update_t_ensures1
    {
        axiom update_t_ensures1_l0:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat x; (
                            (\forall real et; (
                                (\forall real dt; (((((isnull(c))==((0))))==>(((acc(A, b, c, et, x, (0.1111111111111111)))==>(((((dt)==((((0.1388888888888889))/(norm(A, b, c, x))))))==>((TRIGGER:(((norm(A, b, mat_add(grad(A, b, x), mat_scal(c, ((et)+(dt)))), x))<=((0.25)))))))))))
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
    lemma update_t_ensures1:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real at; (
                            (\forall real dt; (((((isnull(c))==((0))))==>(((acc(A, b, c, at, x, (0.1111111111111111)))==>(((((dt)==((((0.1388888888888889))/(norm(A, b, c, x))))))==>(acc(A, b, c, ((at)+(dt)), x, (0.25))))))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/