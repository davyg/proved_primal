
#include "primalTest.h"



/*@
    axiomatic axioms_set_pathfollowing_dx
    {
        axiom mat_eq_def_2_1:
            (\forall LMat A; (
                (\forall LMat B; (((((getM(A))==((2))))==>(((((getN(A))==((1))))==>(((((getM(B))==((2))))==>(((((getN(B))==((1))))==>(((((((mat_get(A, (1), (0)))==(mat_get(B, (1), (0)))))&&(((mat_get(A, (0), (0)))==(mat_get(B, (0), (0)))))))==>((TRIGGER:(((A)==(B))))))))))))))
                ))
            ))
        ;
    }
*/



void set_pathfollowing_dx()
{
    set_pathfollowing_dx_sub_0();
    set_pathfollowing_dx_sub_1();
    //@assert (((getM(MatVar(((double*)pathfollowing_dx), (2), (1))))==((2))));
    //@assert (((getN(MatVar(((double*)pathfollowing_dx), (2), (1))))==((1))));
    //@assert (((getM(\at(mat_scal(MatVar(((double*)cholesky_PF2_xUT), (2), (1)), (-1.0)), Pre)))==((2))));
    //@assert (((getN(\at(mat_scal(MatVar(((double*)cholesky_PF2_xUT), (2), (1)), (-1.0)), Pre)))==((1))));
    //@assert (((mat_get(MatVar(((double*)pathfollowing_dx), (2), (1)), (1), (0)))==(mat_get(\at(mat_scal(MatVar(((double*)cholesky_PF2_xUT), (2), (1)), (-1.0)), Pre), (1), (0)))));
    //@assert (((mat_get(MatVar(((double*)pathfollowing_dx), (2), (1)), (0), (0)))==(mat_get(\at(mat_scal(MatVar(((double*)cholesky_PF2_xUT), (2), (1)), (-1.0)), Pre), (0), (0)))));
}