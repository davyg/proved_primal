
#include "primalTest.h"



/*@
    axiomatic axioms_pathfollowing
    {
        axiom PF2_LOWER_ONE:((LOWER((1)))==((0.060894660159159085)))
        ;
        axiom PF2_LOWER_POS:
            (\forall integer k; (((((k)>((1))))==>(((LOWER(k))==((((1.125))*(LOWER(((k)-((1))))))))))
            ))
        ;
        axiom PF2_myoptimality:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall real x0; (
                            (\forall real x1; (
                                (\forall real t; (((acc(A, b, c, t, MatCst_2_1(x0, x1), (0.1111111111111111)))==>(((((((((mat_get(c, (0), (0)))*(x0)))+(((mat_get(c, (1), (0)))*(x1)))))-(sol(A, b, c))))<((((1.1388888888888888))/(t))))))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom PF2_ncca:
            (\forall LMat x; (((acc(LOGIC_A, LOGIC_b, LOGIC_c, (0.0), x, (0.1111111111111111)))==>(((norm(LOGIC_A, LOGIC_b, LOGIC_c, x))<((1.9957050004079702)))))
            ))
        ;
        axiom PF2_acc_gt:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall real t; (
                            (\forall LMat x; (
                                (\forall real beta; (((((beta)<((1.0))))==>(((acc(A, b, c, t, x, beta))==>(mat_gt(mat_mult(A, x), b)))))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom PF2_pathfollowing_ensures2:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat x; (
                            (\forall real t; (((acc(A, b, c, t, x, (0.1111111111111111)))==>(((((t)>(LOWER((222)))))==>(((((dot(x, c))-(sol(A, b, c))))<((1e-10)))))))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom PF2_pathfollowing_invariant4:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall integer l; (
                            (\forall real t1; (
                                (\forall real t2; (((((l)>((1))))==>(((((t1)>(LOWER(((l)-((1)))))))==>(((((t2)>(((t1)*((1.125))))))==>(((t2)>(LOWER(l)))))))))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom PF2_pathfollowing_pre_update:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall real t; (
                            (\forall LMat x; (((acc(A, b, c, (0.0), x, (0.1111111111111111)))==>(((((t)==((0.06959389732475324))))==>(acc(A, b, c, t, x, (0.25))))))
                            ))
                        ))
                    ))
                ))
            ))
        ;
    }
*/



void pathfollowing()
{
    pathfollowing_t = (0.06959389732475324);
    compute_pre();
    update_x();
    /*@
      @loop invariant (((((1))<=(pathfollowing_i0)))&&(((pathfollowing_i0)<=((222)))));
      @loop invariant ((pathfollowing_i0)>=((1)));
      @loop invariant ((pathfollowing_i0)<=((222)));
      @loop invariant acc(LOGIC_A, LOGIC_b, LOGIC_c, pathfollowing_t, MatVar(((double*)pathfollowing_X), (2), (1)), (0.1111111111111111));
      @loop invariant ((pathfollowing_t)>(LOWER(pathfollowing_i0)));
      @ loop assigns compute_dt_nc, *(cholesky_PF2_A+(0..4)), cholesky_PF2_sumcho, *(pathfollowing_X+(0..2)), *(cholesky_PF2_D+(0..4)), cholesky_PF2_sumUT, *(compute_dt_pre_nc+(0..1)), pathfollowing_t, *(compute_pre_grad+(0..2)), cholesky_PF2_i1, *(cholesky_PF2_L+(0..4)), *(compute_pre_hess+(0..4)), cholesky_PF2_i2, *(cholesky_PF2_xUT+(0..2)), pathfollowing_dt, *(pathfollowing_dx+(0..2)), *(cholesky_PF2_xLT+(0..2)), pathfollowing_i0, *(compute_pre_vals+(0..5)), cholesky_PF2_sumLT, cholesky_PF2_i0, *(cholesky_PF2_b+(0..2)), *(cholesky_PF2_z+(0..2));
    */
    for (pathfollowing_i0 = (1);pathfollowing_i0 < (222);pathfollowing_i0++)
    {
        compute_pre();
        update_t();
        update_x();
    }
}