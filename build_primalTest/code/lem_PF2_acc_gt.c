
#include "primalTest.h"



/*@
    lemma PF2_acc_gt:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall real t; (
                        (\forall LMat x; (
                            (\forall real beta; (((((beta)<((1.0))))==>(((acc(A, b, c, t, x, beta))==>(mat_gt(mat_mult(A, x), b)))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/