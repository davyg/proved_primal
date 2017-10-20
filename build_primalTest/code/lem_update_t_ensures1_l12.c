
#include "primalTest.h"



/*@
    axiomatic axioms_update_t_ensures1_l12
    {
        axiom norm_tri:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat x; (
                        (\forall LMat y; (
                            (\forall LMat z; (((norm(A, b, mat_add(y, z), x))<=(((norm(A, b, y, x))+(norm(A, b, z, x)))))
                            ))
                        ))
                    ))
                ))
            ))
        ;
    }
*/



/*@
    lemma update_t_ensures1_l12:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat x; (
                        (\forall real et; (
                            (\forall real dt; (((norm(A, b, mat_add(mat_add(grad(A, b, x), mat_scal(c, et)), mat_scal(c, dt)), x))<=(((norm(A, b, mat_add(grad(A, b, x), mat_scal(c, et)), x))+(norm(A, b, mat_scal(c, dt), x)))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/