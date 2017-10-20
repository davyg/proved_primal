
#include "primalTest.h"



/*@
    axiomatic axioms_mat_eq_def_1_1
    {
        axiom mat_eq_def:
            (\forall LMat A; (
                (\forall LMat B; (((((((((getM(A))==(getM(B))))&&(((getN(A))==(getN(B))))))&&(
                    (\forall integer i; (
                        (\forall integer j; (((((((i)>=((0))))&&(((i)<(getM(A))))))==>(((((((j)>=((0))))&&(((j)<(getN(A))))))==>(((mat_get(A, i, j))==(mat_get(B, i, j)))))))
                        ))
                    )))))==>(((A)==(B))))
                ))
            ))
        ;
    }
*/



/*@
    lemma mat_eq_def_1_1:
        (\forall LMat A; (
            (\forall LMat B; (((((getM(A))==((1))))==>(((((getN(A))==((1))))==>(((((getM(B))==((1))))==>(((((getN(B))==((1))))==>(((((mat_get(A, (0), (0)))==(mat_get(B, (0), (0)))))==>((TRIGGER:(((A)==(B))))))))))))))
            ))
        ))
    ;
*/