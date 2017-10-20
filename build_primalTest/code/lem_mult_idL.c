
#include "primalTest.h"



/*@
    lemma mult_idL:
        (\forall LMat A; (
            (\forall integer m; (((((getM(A))==(m)))==>(((mat_mult(id(m, m), A))==(A))))
            ))
        ))
    ;
*/