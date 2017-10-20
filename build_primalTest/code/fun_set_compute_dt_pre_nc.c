
#include "primalTest.h"



/*@
    axiomatic axioms_set_compute_dt_pre_nc
    {
        axiom mat_eq_def_1_1:
            (\forall LMat A; (
                (\forall LMat B; (((((getM(A))==((1))))==>(((((getN(A))==((1))))==>(((((getM(B))==((1))))==>(((((getN(B))==((1))))==>(((((mat_get(A, (0), (0)))==(mat_get(B, (0), (0)))))==>((TRIGGER:(((A)==(B))))))))))))))
                ))
            ))
        ;
    }
*/



void set_compute_dt_pre_nc()
{
    set_compute_dt_pre_nc_sub_0();
    //@assert (((getM(MatVar(((double*)compute_dt_pre_nc), (1), (1))))==((1))));
    //@assert (((getN(MatVar(((double*)compute_dt_pre_nc), (1), (1))))==((1))));
    //@assert (((getM(\at(mat_mult(transpose(LOGIC_c), MatVar(((double*)cholesky_PF2_xUT), (2), (1))), Pre)))==((1))));
    //@assert (((getN(\at(mat_mult(transpose(LOGIC_c), MatVar(((double*)cholesky_PF2_xUT), (2), (1))), Pre)))==((1))));
    //@assert (((mat_get(MatVar(((double*)compute_dt_pre_nc), (1), (1)), (0), (0)))==(mat_get(\at(mat_mult(transpose(LOGIC_c), MatVar(((double*)cholesky_PF2_xUT), (2), (1))), Pre), (0), (0)))));
}