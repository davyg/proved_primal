
#include "primalTest.h"



/*@
    axiomatic axioms_compute_dx
    {
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



void compute_dx()
{
    set_cholesky_PF2_A();
    set_cholesky_PF2_b();
    cholesky_PF2();
    set_pathfollowing_dx();
}