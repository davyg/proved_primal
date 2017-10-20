
#include "primalTest.h"



/*@
    lemma norm_sep:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat x; (
                    (\forall LMat y; (((((norm(A, b, y, x))==((0.0))))==>(isnull(y)))
                    ))
                ))
            ))
        ))
    ;
*/