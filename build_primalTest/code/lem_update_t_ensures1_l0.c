
#include "primalTest.h"



/*@
    axiomatic axioms_update_t_ensures1_l0
    {
        axiom update_t_ensures1_l1:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat x; (
                            (\forall real et; (
                                (\forall real dt; (((norm(A, b, mat_add(grad(A, b, x), mat_scal(c, ((et)+(dt)))), x))<=(((norm(A, b, mat_add(grad(A, b, x), mat_scal(c, et)), x))+(norm(A, b, mat_scal(c, dt), x)))))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom update_t_ensures1_l2:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat x; (
                            (\forall real et; (
                                (\forall real dt; (((acc(A, b, c, et, x, (0.1111111111111111)))==>(((norm(A, b, mat_add(grad(A, b, x), mat_scal(c, et)), x))<=((0.1111111111111111)))))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom update_t_ensures1_l3:
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
    }
*/



/*@
    lemma update_t_ensures1_l0:
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
*/