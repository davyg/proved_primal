
#include "primalTest.h"



/*@
    axiomatic axioms_Amult
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
        axiom mult_inner_pos:
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
        axiom mult_inner_neg:
            (\forall LMat A; (
                (\forall LMat B; (
                    (\forall integer i; (
                        (\forall integer j; (((mult_inner(A, B, i, j, (-1)))==((0.0)))
                        ))
                    ))
                ))
            ))
        ;
    }
*/



/*@
    lemma Amult:
        (\forall LMat A; (
            (\forall LMat B; (
                (\forall LMat C; (((mat_mult(mat_mult(A, B), C))==(mat_mult(A, mat_mult(B, C))))
                ))
            ))
        ))
    ;
*/