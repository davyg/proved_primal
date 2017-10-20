
#include "primalTest.h"



/*@
    lemma norm_tri:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat x; (
                    (\forall LMat y; (
                        (\forall LMat z; (((norm(A, b, mat_add(y, z), x))<=(((norm(A, b, y, x))+(norm(A, b, z, x)))))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/