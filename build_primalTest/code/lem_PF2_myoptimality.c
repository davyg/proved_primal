
#include "primalTest.h"



/*@
    lemma PF2_myoptimality:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall real x0; (
                        (\forall real x1; (
                            (\forall real t; (((acc(A, b, c, t, MatCst_2_1(x0, x1), (0.1111111111111111)))==>(((((((((mat_get(c, (0), (0)))*(x0)))+(((mat_get(c, (1), (0)))*(x1)))))-(sol(A, b, c))))<((((1.1388888888888888))/(t))))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/