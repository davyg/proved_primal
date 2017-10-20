
#include "primalTest.h"



/*@
    lemma PF2_pathfollowing_ensures2:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real t; (((acc(A, b, c, t, x, (0.1111111111111111)))==>(((((t)>(LOWER((222)))))==>(((((dot(x, c))-(sol(A, b, c))))<((1e-10)))))))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/