
#include "primalTest.h"



/*@
    axiomatic axioms_compute_dt
    {
        axiom mat_eq_def_2_1:
            (\forall LMat A; (
                (\forall LMat B; (((((getM(A))==((2))))==>(((((getN(A))==((1))))==>(((((getM(B))==((2))))==>(((((getN(B))==((1))))==>(((((((mat_get(A, (1), (0)))==(mat_get(B, (1), (0)))))&&(((mat_get(A, (0), (0)))==(mat_get(B, (0), (0)))))))==>((TRIGGER:(((A)==(B))))))))))))))
                ))
            ))
        ;
        axiom mat_eq_def_2_2:
            (\forall LMat A; (
                (\forall LMat B; (((((getM(A))==((2))))==>(((((getN(A))==((2))))==>(((((getM(B))==((2))))==>(((((getN(B))==((2))))==>(((((((mat_get(A, (1), (1)))==(mat_get(B, (1), (1)))))&&(((((mat_get(A, (1), (0)))==(mat_get(B, (1), (0)))))&&(((((mat_get(A, (0), (1)))==(mat_get(B, (0), (1)))))&&(((mat_get(A, (0), (0)))==(mat_get(B, (0), (0)))))))))))==>((TRIGGER:(((A)==(B))))))))))))))
                ))
            ))
        ;
        axiom norm_pre_pos:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat a; (
                        (\forall LMat x; (((mat_get(mat_mult(transpose(a), mat_mult(inv(hess(A, b, x)), a)), (0), (0)))>=((0.0)))
                        ))
                    ))
                ))
            ))
        ;
        axiom norm_pos:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat x; (
                        (\forall LMat y; (((norm(A, b, y, x))>=((0.0)))
                        ))
                    ))
                ))
            ))
        ;
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
        axiom Amult:
            (\forall LMat A; (
                (\forall LMat B; (
                    (\forall LMat C; (((mat_mult(mat_mult(A, B), C))==(mat_mult(A, mat_mult(B, C))))
                    ))
                ))
            ))
        ;
        axiom mult_idL:
            (\forall LMat A; (
                (\forall integer m; (((((getM(A))==(m)))==>(((mat_mult(id(m, m), A))==(A))))
                ))
            ))
        ;
    }
*/



void compute_dt()
{
    set_cholesky_PF2_A1();
    set_cholesky_PF2_b1();
    cholesky_PF2();
    //@assert (((MatVar(((double*)cholesky_PF2_xUT), (2), (1)))==(mat_mult(inv(hess(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))), LOGIC_c))));
    set_compute_dt_pre_nc();
    //@assert (((MatVar(((double*)compute_dt_pre_nc), (1), (1)))==(mat_mult(transpose(LOGIC_c), mat_mult(inv(hess(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))), LOGIC_c)))));
    set_nc();
    //@assert (((compute_dt_nc)==(norm(LOGIC_A, LOGIC_b, LOGIC_c, MatVar(((double*)pathfollowing_X), (2), (1))))));
    pathfollowing_dt = (((0.1388888888888889))/(compute_dt_nc));
}