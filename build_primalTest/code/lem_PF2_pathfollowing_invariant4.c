
#include "primalTest.h"



/*@
    lemma PF2_pathfollowing_invariant4:
        (\forall LMat A; (
            (\forall LMat b; (
                (\forall LMat c; (
                    (\forall integer l; (
                        (\forall real t1; (
                            (\forall real t2; (((((l)>((1))))==>(((((t1)>(LOWER(((l)-((1)))))))==>(((((t2)>(((t1)*((1.125))))))==>(((t2)>(LOWER(l)))))))))
                            ))
                        ))
                    ))
                ))
            ))
        ))
    ;
*/