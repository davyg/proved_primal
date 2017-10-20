
#include "primalTest.h"



/*@
    axiomatic axioms_update_t
    {
        axiom lemma_4_2_1:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat x; (
                            (\forall real t; (((acc(A, b, c, t, x, (0.1111111111111111)))==>(((((t)*(norm(A, b, c, x))))<=((1.1111111111111112)))))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom update_t_ensures1:
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
        axiom update_t_ensures2:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat x; (
                            (\forall real at; (
                                (\forall real dt; (((acc(A, b, c, at, x, (0.1111111111111111)))==>(((((dt)==((((0.1388888888888889))/(norm(A, b, c, x))))))==>(((((at)+(dt)))>(((at)*((1.125)))))))))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
    }
*/



void update_t()
{
    compute_dt();
    pathfollowing_t = ((pathfollowing_t)+(pathfollowing_dt));
}