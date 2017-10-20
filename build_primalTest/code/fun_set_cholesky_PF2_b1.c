
#include "primalTest.h"



/*@
    axiomatic axioms_set_cholesky_PF2_b1
    {
        axiom mat_eq_def_2_1:
            (\forall LMat A; (
                (\forall LMat B; (((((getM(A))==((2))))==>(((((getN(A))==((1))))==>(((((getM(B))==((2))))==>(((((getN(B))==((1))))==>(((((((mat_get(A, (1), (0)))==(mat_get(B, (1), (0)))))&&(((mat_get(A, (0), (0)))==(mat_get(B, (0), (0)))))))==>((TRIGGER:(((A)==(B))))))))))))))
                ))
            ))
        ;
    }
*/



void set_cholesky_PF2_b1()
{
    set_cholesky_PF2_b1_sub_0();
    set_cholesky_PF2_b1_sub_1();
    //@assert (((getM(MatVar(((double*)cholesky_PF2_b), (2), (1))))==((2))));
    //@assert (((getN(MatVar(((double*)cholesky_PF2_b), (2), (1))))==((1))));
    //@assert (((getM(\at(LOGIC_c, Pre)))==((2))));
    //@assert (((getN(\at(LOGIC_c, Pre)))==((1))));
    //@assert (((mat_get(MatVar(((double*)cholesky_PF2_b), (2), (1)), (1), (0)))==(mat_get(\at(LOGIC_c, Pre), (1), (0)))));
    //@assert (((mat_get(MatVar(((double*)cholesky_PF2_b), (2), (1)), (0), (0)))==(mat_get(\at(LOGIC_c, Pre), (0), (0)))));
}