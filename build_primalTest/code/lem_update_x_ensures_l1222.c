
#include "primalTest.h"



/*@
    axiomatic axioms_update_x_ensures_l1222
    {
        axiom omega_inc:
            (\forall real x; (
                (\forall real y; (((((x)>=((0.0))))==>(((((y)<((1.0))))==>(((((x)<=(y)))==>(((omega(x))<=(omega(y)))))))))
                ))
            ))
        ;
        axiom bet_gam_inf1:(1)
        ;
        axiom norm_pos:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat x; (
                        (\forall LMat y; (((norm(A, b, y, x))>=((0.0)))
                        ))
                    ))
                ))
            ))
        ;
    }
*/



/*@
    lemma update_x_ensures_l1222:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall LMat ax; (
                        (\forall LMat dx; (
                            (\forall real t; (((((norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax))<=((0.25))))==>(((omega(norm(A, b, mat_add(grad(A, b, ax), mat_scal(c, t)), ax)))<=(omega((0.25))))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/