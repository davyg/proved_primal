
#include "primalTest.h"



/*@
    axiomatic axioms_set_compute_pre_grad
    {
        axiom mat_eq_def_2_1:
            (\forall LMat A; (
                (\forall LMat B; (((((getM(A))==((2))))==>(((((getN(A))==((1))))==>(((((getM(B))==((2))))==>(((((getN(B))==((1))))==>(((((((mat_get(A, (1), (0)))==(mat_get(B, (1), (0)))))&&(((mat_get(A, (0), (0)))==(mat_get(B, (0), (0)))))))==>((TRIGGER:(((A)==(B))))))))))))))
                ))
            ))
        ;
    }
*/



void set_compute_pre_grad()
{
    set_compute_pre_grad_sub_0();
    set_compute_pre_grad_sub_1();
    //@assert (((getM(MatVar(((double*)compute_pre_grad), (2), (1))))==((2))));
    //@assert (((getN(MatVar(((double*)compute_pre_grad), (2), (1))))==((1))));
    //@assert (((getM(\at(unit((0.0), (2), (1)), Pre)))==((2))));
    //@assert (((getN(\at(unit((0.0), (2), (1)), Pre)))==((1))));
    //@assert (((mat_get(MatVar(((double*)compute_pre_grad), (2), (1)), (1), (0)))==(mat_get(\at(unit((0.0), (2), (1)), Pre), (1), (0)))));
    //@assert (((mat_get(MatVar(((double*)compute_pre_grad), (2), (1)), (0), (0)))==(mat_get(\at(unit((0.0), (2), (1)), Pre), (0), (0)))));
}