
#include "primalTest.h"



/*@
    lemma update_t_ensures2:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real at; (
                            (\forall real dt; (((acc(A, b, c, at, x, (0.1111111111111111)))==>(((((dt)==((((0.1388888888888889))/(norm(A, b, c, x))))))==>(((((at)+(dt)))>(((at)*((1.125)))))))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/