
#include "primalTest.h"



/*@
    lemma mult_idR:
        (\forall LMat A; (
            (\forall integer m; (((((getM(A))==(m)))==>(((mat_mult(A, id(m, m)))==(A))))
            ))
        ))
    ;
*/