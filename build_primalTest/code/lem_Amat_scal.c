
#include "primalTest.h"



/*@
    lemma Amat_scal:
        (\forall LMat A; (
            (\forall real x; (
                (\forall real y; (((mat_scal(mat_scal(A, x), y))==(mat_scal(A, ((x)*(y)))))
                ))
            ))
        ))
    ;
*/