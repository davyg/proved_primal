
#include "primalTest.h"



/*@
    lemma update_x_ensures_l1221:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat ax; (
                        (\forall LMat dx; (
                            (\forall real t; (((acc(A, b, c, t, ax, (0.25)))==>(((norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax))<=((0.25)))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/