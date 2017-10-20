
#include "primalTest.h"



/*@
    lemma Aadd:
        (\forall LMat A; (
            (\forall LMat B; (
                (\forall LMat C; (((mat_add(mat_add(A, B), C))==(mat_add(A, mat_add(B, C))))
                ))
            ))
        ))
    ;
*/