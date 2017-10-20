
#include "primalTest.h"



/*@
    lemma mat_scal_dev:
        (\forall LMat A; (
            (\forall real x; (
                (\forall real y; (((mat_scal(A, ((x)+(y))))==(mat_add(mat_scal(A, x), mat_scal(A, y))))
                ))
            ))
        ))
    ;
*/