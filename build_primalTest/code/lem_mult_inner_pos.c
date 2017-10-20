
#include "primalTest.h"



/*@
    lemma mult_inner_pos:
        (\forall LMat A; (
            (\forall LMat B; (
                (\forall integer i; (
                    (\forall integer j; (
                        (\forall integer k; (((((k)>=((0))))==>(((mult_inner(A, B, i, j, k))==(((((mat_get(A, i, k))*(mat_get(B, k, j))))+(mult_inner(A, B, i, j, ((k)-((1))))))))))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/