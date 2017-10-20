
#include "primalTest.h"



/*@
    lemma update_t_ensures1_l2:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real et; (
                            (\forall real dt; (((acc(A, b, c, et, x, (0.1111111111111111)))==>(((norm(A, b, mat_add(grad(A, b, x), mat_scal(c, et)), x))<=((0.1111111111111111)))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/