
#include "primalTest.h"



/*@
    axiomatic axioms_mat_eq_def_2_2
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
    lemma mat_eq_def_2_2:
        (\forall LMat A; (
            (\forall LMat B; (((((getM(A))==((2))))==>(((((getN(A))==((2))))==>(((((getM(B))==((2))))==>(((((getN(B))==((2))))==>(((((((mat_get(A, (1), (1)))==(mat_get(B, (1), (1)))))&&(((((mat_get(A, (1), (0)))==(mat_get(B, (1), (0)))))&&(((((mat_get(A, (0), (1)))==(mat_get(B, (0), (1)))))&&(((mat_get(A, (0), (0)))==(mat_get(B, (0), (0)))))))))))==>((TRIGGER:(((A)==(B))))))))))))))
            ))
        ))
    ;
*/