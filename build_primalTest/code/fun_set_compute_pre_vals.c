
#include "primalTest.h"



/*@
    axiomatic axioms_set_compute_pre_vals
    {
        axiom mat_eq_def_5_1:
            (\forall LMat A; (
                (\forall LMat B; (((((getM(A))==((5))))==>(((((getN(A))==((1))))==>(((((getM(B))==((5))))==>(((((getN(B))==((1))))==>(((((((mat_get(A, (4), (0)))==(mat_get(B, (4), (0)))))&&(((((mat_get(A, (3), (0)))==(mat_get(B, (3), (0)))))&&(((((mat_get(A, (2), (0)))==(mat_get(B, (2), (0)))))&&(((((mat_get(A, (1), (0)))==(mat_get(B, (1), (0)))))&&(((mat_get(A, (0), (0)))==(mat_get(B, (0), (0)))))))))))))==>((TRIGGER:(((A)==(B))))))))))))))
                ))
            ))
        ;
    }
*/



void set_compute_pre_vals()
{
    set_compute_pre_vals_sub_0();
    set_compute_pre_vals_sub_1();
    set_compute_pre_vals_sub_2();
    set_compute_pre_vals_sub_3();
    set_compute_pre_vals_sub_4();
    //@assert (((getM(MatVar(((double*)compute_pre_vals), (5), (1))))==((5))));
    //@assert (((getN(MatVar(((double*)compute_pre_vals), (5), (1))))==((1))));
    //@assert (((getM(\at(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), Pre)))==((5))));
    //@assert (((getN(\at(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), Pre)))==((1))));
    //@assert (((mat_get(MatVar(((double*)compute_pre_vals), (5), (1)), (4), (0)))==(mat_get(\at(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), Pre), (4), (0)))));
    //@assert (((mat_get(MatVar(((double*)compute_pre_vals), (5), (1)), (3), (0)))==(mat_get(\at(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), Pre), (3), (0)))));
    //@assert (((mat_get(MatVar(((double*)compute_pre_vals), (5), (1)), (2), (0)))==(mat_get(\at(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), Pre), (2), (0)))));
    //@assert (((mat_get(MatVar(((double*)compute_pre_vals), (5), (1)), (1), (0)))==(mat_get(\at(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), Pre), (1), (0)))));
    //@assert (((mat_get(MatVar(((double*)compute_pre_vals), (5), (1)), (0), (0)))==(mat_get(\at(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), Pre), (0), (0)))));
}