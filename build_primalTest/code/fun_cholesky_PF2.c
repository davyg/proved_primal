
#include "primalTest.h"



void cholesky_PF2()
{
    /*@
      @loop invariant (((((0))<=(cholesky_PF2_i0)))&&(((cholesky_PF2_i0)<=((2)))));
      @ loop assigns cholesky_PF2_sumcho, cholesky_PF2_i2, *(cholesky_PF2_D+(0..4)), cholesky_PF2_i1, *(cholesky_PF2_L+(0..4)), cholesky_PF2_i0;
    */
    for (cholesky_PF2_i0 = (0);cholesky_PF2_i0 < (2);cholesky_PF2_i0++)
    {
        cholesky_PF2_sumcho = (0.0);
        /*@
          @loop invariant (((((0))<=(cholesky_PF2_i1)))&&(((cholesky_PF2_i1)<=(cholesky_PF2_i0))));
          @ loop assigns cholesky_PF2_i1, cholesky_PF2_sumcho;
        */
        for (cholesky_PF2_i1 = (0);cholesky_PF2_i1 < cholesky_PF2_i0;cholesky_PF2_i1++)
        {
            cholesky_PF2_sumcho = ((cholesky_PF2_sumcho)+(((((cholesky_PF2_L[((cholesky_PF2_i0)+(((cholesky_PF2_i1)*((2)))))])*(cholesky_PF2_L[((cholesky_PF2_i0)+(((cholesky_PF2_i1)*((2)))))])))*(cholesky_PF2_D[((cholesky_PF2_i1)+(((cholesky_PF2_i1)*((2)))))]))));
        }
        cholesky_PF2_D[((cholesky_PF2_i0)+(((cholesky_PF2_i0)*((2)))))] = ((cholesky_PF2_A[((cholesky_PF2_i0)+(((cholesky_PF2_i0)*((2)))))])-(cholesky_PF2_sumcho));
        /*@
          @loop invariant ((((((cholesky_PF2_i0)+((1))))<=(cholesky_PF2_i1)))&&(((cholesky_PF2_i1)<=((2)))));
          @ loop assigns cholesky_PF2_i2, cholesky_PF2_i1, *(cholesky_PF2_L+(0..4)), cholesky_PF2_sumcho;
        */
        for (cholesky_PF2_i1 = ((cholesky_PF2_i0)+((1)));cholesky_PF2_i1 < (2);cholesky_PF2_i1++)
        {
            cholesky_PF2_sumcho = (0.0);
            /*@
              @loop invariant (((((0))<=(cholesky_PF2_i2)))&&(((cholesky_PF2_i2)<=(cholesky_PF2_i0))));
              @ loop assigns cholesky_PF2_i2, cholesky_PF2_sumcho;
            */
            for (cholesky_PF2_i2 = (0);cholesky_PF2_i2 < cholesky_PF2_i0;cholesky_PF2_i2++)
            {
                cholesky_PF2_sumcho = ((cholesky_PF2_sumcho)+(((((cholesky_PF2_L[((cholesky_PF2_i1)+(((cholesky_PF2_i2)*((2)))))])*(cholesky_PF2_L[((cholesky_PF2_i0)+(((cholesky_PF2_i2)*((2)))))])))*(cholesky_PF2_D[((cholesky_PF2_i2)+(((cholesky_PF2_i2)*((2)))))]))));
            }
            cholesky_PF2_L[((cholesky_PF2_i1)+(((cholesky_PF2_i0)*((2)))))] = ((((cholesky_PF2_A[((cholesky_PF2_i1)+(((cholesky_PF2_i0)*((2)))))])-(cholesky_PF2_sumcho)))/(cholesky_PF2_D[((cholesky_PF2_i0)+(((cholesky_PF2_i0)*((2)))))]));
        }
    }
    /*@
      @loop invariant (((((0))<=(cholesky_PF2_i0)))&&(((cholesky_PF2_i0)<=((2)))));
      @ loop assigns *(cholesky_PF2_xLT+(0..2)), cholesky_PF2_i1, cholesky_PF2_sumLT, cholesky_PF2_i0;
    */
    for (cholesky_PF2_i0 = (0);cholesky_PF2_i0 < (2);cholesky_PF2_i0++)
    {
        cholesky_PF2_sumLT = (0.0);
        /*@
          @loop invariant (((((0))<=(cholesky_PF2_i1)))&&(((cholesky_PF2_i1)<=(cholesky_PF2_i0))));
          @ loop assigns cholesky_PF2_i1, cholesky_PF2_sumLT;
        */
        for (cholesky_PF2_i1 = (0);cholesky_PF2_i1 < cholesky_PF2_i0;cholesky_PF2_i1++)
        {
            cholesky_PF2_sumLT = ((cholesky_PF2_sumLT)+(((cholesky_PF2_L[((cholesky_PF2_i0)+(((cholesky_PF2_i1)*((2)))))])*(cholesky_PF2_xLT[cholesky_PF2_i1]))));
        }
        cholesky_PF2_xLT[cholesky_PF2_i0] = ((cholesky_PF2_b[cholesky_PF2_i0])-(cholesky_PF2_sumLT));
    }
    /*@
      @loop invariant (((((0))<=(cholesky_PF2_i0)))&&(((cholesky_PF2_i0)<=((2)))));
      @ loop assigns *(cholesky_PF2_z+(0..2)), cholesky_PF2_i0;
    */
    for (cholesky_PF2_i0 = (0);cholesky_PF2_i0 < (2);cholesky_PF2_i0++)
    {
        cholesky_PF2_z[cholesky_PF2_i0] = ((cholesky_PF2_xLT[cholesky_PF2_i0])/(cholesky_PF2_D[((cholesky_PF2_i0)+(((cholesky_PF2_i0)*((2)))))]));
    }
    /*@
      @loop invariant (((((0))<=(cholesky_PF2_i0)))&&(((cholesky_PF2_i0)<=((2)))));
      @ loop assigns *(cholesky_PF2_xUT+(0..2)), cholesky_PF2_i1, cholesky_PF2_i0, cholesky_PF2_sumUT;
    */
    for (cholesky_PF2_i0 = (0);cholesky_PF2_i0 < (2);cholesky_PF2_i0++)
    {
        cholesky_PF2_sumUT = (0.0);
        /*@
          @loop invariant (((((((2))-(cholesky_PF2_i0)))<=(cholesky_PF2_i1)))&&(((cholesky_PF2_i1)<=((2)))));
          @ loop assigns cholesky_PF2_i1, cholesky_PF2_sumUT;
        */
        for (cholesky_PF2_i1 = (((2))-(cholesky_PF2_i0));cholesky_PF2_i1 < (2);cholesky_PF2_i1++)
        {
            cholesky_PF2_sumUT = ((cholesky_PF2_sumUT)+(((cholesky_PF2_L[((cholesky_PF2_i1)+((((((((2))-(cholesky_PF2_i0)))-((1))))*((2)))))])*(cholesky_PF2_xUT[cholesky_PF2_i1]))));
        }
        cholesky_PF2_xUT[(((((2))-(cholesky_PF2_i0)))-((1)))] = ((cholesky_PF2_z[(((((2))-(cholesky_PF2_i0)))-((1)))])-(cholesky_PF2_sumUT));
    }
}