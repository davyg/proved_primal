
#include "primalTest.h"



/*@
    axiomatic axioms_set_cholesky_PF2_A1
    {
        axiom mat_eq_def_2_2:
            (\forall LMat A; (
                (\forall LMat B; (((((getM(A))==((2))))==>(((((getN(A))==((2))))==>(((((getM(B))==((2))))==>(((((getN(B))==((2))))==>(((((((mat_get(A, (1), (1)))==(mat_get(B, (1), (1)))))&&(((((mat_get(A, (1), (0)))==(mat_get(B, (1), (0)))))&&(((((mat_get(A, (0), (1)))==(mat_get(B, (0), (1)))))&&(((mat_get(A, (0), (0)))==(mat_get(B, (0), (0)))))))))))==>((TRIGGER:(((A)==(B))))))))))))))
                ))
            ))
        ;
    }
*/



void set_cholesky_PF2_A1()
{
    set_cholesky_PF2_A1_sub_0();
    set_cholesky_PF2_A1_sub_1();
    set_cholesky_PF2_A1_sub_2();
    set_cholesky_PF2_A1_sub_3();
    //@assert (((getM(MatVar(((double*)cholesky_PF2_A), (2), (2))))==((2))));
    //@assert (((getN(MatVar(((double*)cholesky_PF2_A), (2), (2))))==((2))));
    //@assert (((getM(\at(MatVar(((double*)compute_pre_hess), (2), (2)), Pre)))==((2))));
    //@assert (((getN(\at(MatVar(((double*)compute_pre_hess), (2), (2)), Pre)))==((2))));
    //@assert (((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (1), (1)))==(mat_get(\at(MatVar(((double*)compute_pre_hess), (2), (2)), Pre), (1), (1)))));
    //@assert (((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (1), (0)))==(mat_get(\at(MatVar(((double*)compute_pre_hess), (2), (2)), Pre), (1), (0)))));
    //@assert (((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (0), (1)))==(mat_get(\at(MatVar(((double*)compute_pre_hess), (2), (2)), Pre), (0), (1)))));
    //@assert (((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (0), (0)))==(mat_get(\at(MatVar(((double*)compute_pre_hess), (2), (2)), Pre), (0), (0)))));
}