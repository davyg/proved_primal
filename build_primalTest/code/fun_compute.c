
#include "primalTest.h"



/*@
    axiomatic axioms_compute
    {
        axiom PF2_analytic_center:acc(LOGIC_A, LOGIC_b, LOGIC_c, (0.0), MatCst_2_1((0.060718593156416256), (0.3095989773973741)), (0.1111111111111111))
        ;
    }
*/



void compute()
{
    set_pathfollowing_X1();
    pathfollowing();
}