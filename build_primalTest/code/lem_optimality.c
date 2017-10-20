
#include "primalTest.h"



/*@
    lemma optimality:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real t; (((acc(A, b, c, t, x, (0.1111111111111111)))==>(((((dot(c, x))-(sol(A, b, c))))<((((1.1388888888888888))/(t))))))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/