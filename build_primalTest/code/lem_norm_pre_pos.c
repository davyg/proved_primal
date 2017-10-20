
#include "primalTest.h"



/*@
    lemma norm_pre_pos:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat a; (
                    (\forall LMat x; (((mat_get(mat_mult(transpose(a), mat_mult(inv(hess(A, b, x)), a)), (0), (0)))>=((0.0)))
                    ))
                ))
            ))
        ))
    ;
*/