
#include "primalTest.h"



/*@
    lemma norm_scal:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat x; (
                    (\forall LMat y; (
                        (\forall real k; (((norm(A, b, mat_scal(y, k), x))==(((norm(A, b, y, x))*(k))))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/