
#include "primalTest.h"



/*@
    lemma update_t_ensures1_l31:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real dt; (((((dt)==((((0.1388888888888889))/(norm(A, b, c, x))))))==>(((norm(A, b, mat_scal(c, dt), x))==(norm(A, b, mat_scal(c, (((0.1388888888888889))/(norm(A, b, c, x)))), x)))))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/