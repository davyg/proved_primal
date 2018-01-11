
#include <stdio.h>
#include <math.h>

/*@ requires x >= 0;
  @ ensures \result == \sqrt(x);
  @ assigns \nothing;
*/
double mysqrt(double x);


#define LOGIC_www MatCst_1_1((0.0))
#define LOGIC_A MatCst_5_2((3.0), (1.0), (-5.0), (-1.0), (1.0), (-3.0), (1.0), (-1.0), (2.0), (-6.0))
#define LOGIC_b MatCst_5_1((3.0), (2.0), (5.0), (2.0), (4.0))
#define LOGIC_c MatCst_2_1((-1.0), (4.0))
#define LOGIC_CA MatCst_2_1((0.060718593156416256), (0.3095989773973741))



/*@
    axiomatic matrix
    {
        type LMat;
        logic integer getM(LMat x0);
        logic integer getN(LMat x0);
        logic boolean None(LMat x0, LMat x1);
        logic boolean mat_gt(LMat x0, LMat x1);
        logic real mat_get(LMat x0, integer x1, integer x2);
        logic LMat transpose(LMat x0);
        logic boolean isnull(LMat x0);
        logic real dot(LMat x0, LMat x1);
        logic LMat diag(LMat x0);
        logic LMat inv(LMat x0);
        logic LMat mat_add(LMat x0, LMat x1);
        logic LMat __radd__(LMat x0, LMat x1);
        logic LMat mat_sub(LMat x0, LMat x1);
        logic LMat __rsub__(LMat x0, LMat x1);
        axiom getM_sub:
            (\forall LMat A; (
                (\forall LMat B; (((getM(mat_sub(A, B)))==(getM(A)))
                ))
            ))
        ;
        axiom getN_sub:
            (\forall LMat A; (
                (\forall LMat B; (((getN(mat_sub(A, B)))==(getN(A)))
                ))
            ))
        ;
        axiom get_sub:
            (\forall LMat A; (
                (\forall LMat B; (
                    (\forall integer i; (
                        (\forall integer j; (((mat_get(mat_sub(A, B), i, j))==(((mat_get(A, i, j))-(mat_get(B, i, j)))))
                        ))
                    ))
                ))
            ))
        ;
        axiom getM_add:
            (\forall LMat A; (
                (\forall LMat B; (((getM(mat_add(A, B)))==(getM(A)))
                ))
            ))
        ;
        axiom getN_add:
            (\forall LMat A; (
                (\forall LMat B; (((getN(mat_add(A, B)))==(getN(A)))
                ))
            ))
        ;
        axiom get_add:
            (\forall LMat A; (
                (\forall LMat B; (
                    (\forall integer i; (
                        (\forall integer j; (((mat_get(mat_add(A, B), i, j))==(((mat_get(A, i, j))+(mat_get(B, i, j)))))
                        ))
                    ))
                ))
            ))
        ;
        logic real dot_inner(LMat x0, LMat x1, integer x2) = ((((x2)==((-1))))?((0.0)):(((((mat_get(x0, x2, (0)))*(mat_get(x1, x2, (0)))))+(dot_inner(x0, x1, ((x2)-((1))))))))
        ;
        axiom dot_def:
            (\forall LMat A; (
                (\forall LMat B; (((((getM(A))==(getN(A))))==>(((dot(A, B))==(dot_inner(A, B, ((getM(A))-((1))))))))
                ))
            ))
        ;
        logic real mult_inner(LMat x0, LMat x1, integer x2, integer x3, integer x4) = ((((x4)==((-1))))?((0.0)):(((((mat_get(x0, x2, x4))*(mat_get(x1, x4, x3))))+(mult_inner(x0, x1, x2, x3, ((x4)-((1))))))))
        ;
        logic LMat mat_mult(LMat x0, LMat x1);
        axiom getM_mult:
            (\forall LMat A; (
                (\forall LMat B; (((getM(mat_mult(A, B)))==(getM(A)))
                ))
            ))
        ;
        axiom getN_mult:
            (\forall LMat A; (
                (\forall LMat B; (((getN(mat_mult(A, B)))==(getN(B)))
                ))
            ))
        ;
        axiom get_mult:
            (\forall LMat A; (
                (\forall LMat B; (
                    (\forall integer i; (
                        (\forall integer j; (((mat_get(mat_mult(A, B), i, j))==(mult_inner(A, B, i, j, ((getN(A))-((1))))))
                        ))
                    ))
                ))
            ))
        ;
        logic LMat mat_scal(LMat x0, real x1);
        axiom getM_scal:
            (\forall real x; (
                (\forall LMat A; (((getM(mat_scal(A, x)))==(getM(A)))
                ))
            ))
        ;
        axiom getN_scal:
            (\forall real x; (
                (\forall LMat A; (((getN(mat_scal(A, x)))==(getN(A)))
                ))
            ))
        ;
        axiom get_scal:
            (\forall real x; (
                (\forall LMat A; (
                    (\forall integer i; (
                        (\forall integer j; (((mat_get(mat_scal(A, x), i, j))==(((mat_get(A, i, j))*(x))))
                        ))
                    ))
                ))
            ))
        ;
        axiom isnull_def:
            (\forall LMat A; (((
                (\forall integer i; (
                    (\forall integer j; (((mat_get(A, i, j))==((0.0)))
                    ))
                )))<==>(isnull(A)))
            ))
        ;
        logic LMat id(integer x0, integer x1);
        axiom getM_id:
            (\forall integer m; (
                (\forall integer n; (((getM(id(m, n)))==(m))
                ))
            ))
        ;
        axiom getN_id:
            (\forall integer m; (
                (\forall integer n; (((getN(id(m, n)))==(n))
                ))
            ))
        ;
        axiom get_id:
            (\forall integer m; (
                (\forall integer n; (
                    (\forall integer i; (
                        (\forall integer j; (((((((i)>=((0))))&&(((i)<(m)))))==>(((((((j)>=((0))))&&(((j)<(n)))))==>(((mat_get(id(m, n), i, j))==(((((i)==(j)))?((1.0)):((0.0)))))))))
                        ))
                    ))
                ))
            ))
        ;
        logic real det(LMat x0);
        axiom det_def:
            (\forall LMat A; (
                (\forall LMat B; (((((getN(A))==(getM(B))))==>(((((getM(A))==(getN(B))))==>(((det(mat_add(id(getN(A), getN(A)), mat_mult(A, B))))==(det(mat_add(id(getM(A), getM(A)), mat_mult(B, A)))))))))
                ))
            ))
        ;
        axiom getM_inv:
            (\forall LMat A; (((getM(inv(A)))==(getM(A)))
            ))
        ;
        axiom getN_inv:
            (\forall LMat A; (((getN(inv(A)))==(getN(A)))
            ))
        ;
        axiom inv_def1:
            (\forall LMat A; (((mat_mult(A, inv(A)))==(id(getM(A), getN(A))))
            ))
        ;
        axiom inv_def2:
            (\forall LMat A; (((mat_mult(inv(A), A))==(id(getM(A), getN(A))))
            ))
        ;
        axiom getM_transpose:
            (\forall LMat A; (((getM(transpose(A)))==(getN(A)))
            ))
        ;
        axiom getN_transpose:
            (\forall LMat A; (((getN(transpose(A)))==(getM(A)))
            ))
        ;
        axiom get_transpose:
            (\forall LMat A; (
                (\forall integer i; (
                    (\forall integer j; (((mat_get(transpose(A), i, j))==(mat_get(A, j, i)))
                    ))
                ))
            ))
        ;
        logic LMat MatVar(double* x0, integer x1, integer x2) reads x0[(0)..(( x1)*( x2))];
        axiom getM_MatVar:
            (\forall double* a; (
                (\forall integer m; (
                    (\forall integer n; (((getM(MatVar(a, m, n)))==(m))
                    ))
                ))
            ))
        ;
        axiom getN_MatVar:
            (\forall double* a; (
                (\forall integer m; (
                    (\forall integer n; (((getN(MatVar(a, m, n)))==(n))
                    ))
                ))
            ))
        ;
        axiom get_MatVar:
            (\forall double* a; (
                (\forall integer m; (
                    (\forall integer n; (
                        (\forall integer i; (
                            (\forall integer j; (((((((i)>=((0))))&&(((i)<(m)))))==>(((((((j)>=((0))))&&(((j)<(n)))))==>(((a[((i)+(((j)*(m))))])==(mat_get(MatVar(a, m, n), i, j)))))))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        logic LMat unit(real x0, integer x1, integer x2);
        axiom getM_unit:
            (\forall real x; (
                (\forall integer m; (
                    (\forall integer n; (((getM(unit(x, m, n)))==(m))
                    ))
                ))
            ))
        ;
        axiom getN_unit:
            (\forall real x; (
                (\forall integer m; (
                    (\forall integer n; (((getN(unit(x, m, n)))==(n))
                    ))
                ))
            ))
        ;
        axiom get_unit:
            (\forall real x; (
                (\forall integer m; (
                    (\forall integer n; (
                        (\forall integer i; (
                            (\forall integer j; (((((((i)>=((0))))&&(((i)<(m)))))==>(((((((j)>=((0))))&&(((j)<(n)))))==>(((mat_get(unit(x, m, n), i, j))==(x))))))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        logic LMat canonical(integer x0, integer x1, integer x2, integer x3);
        logic LMat MatCst_1_1(real x0);
        axiom getM_MatCst_1_1:
            (\forall real x_0_0; (((getM(MatCst_1_1(x_0_0)))==((1)))
            ))
        ;
        axiom getN_MatCst_1_1:
            (\forall real x_0_0; (((getN(MatCst_1_1(x_0_0)))==((1)))
            ))
        ;
        axiom get_MatCst_1_1_0_0:
            (\forall real x_0_0; (((mat_get(MatCst_1_1(x_0_0), (0), (0)))==(x_0_0))
            ))
        ;
        logic LMat MatCst_5_2(real x0, real x1, real x2, real x3, real x4, real x5, real x6, real x7, real x8, real x9);
        axiom getM_MatCst_5_2:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((getM(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1)))==((5)))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom getN_MatCst_5_2:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((getN(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1)))==((2)))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_2_0_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((mat_get(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1), (0), (0)))==(x_0_0))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_2_0_1:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((mat_get(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1), (0), (1)))==(x_0_1))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_2_1_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((mat_get(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1), (1), (0)))==(x_1_0))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_2_1_1:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((mat_get(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1), (1), (1)))==(x_1_1))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_2_2_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((mat_get(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1), (2), (0)))==(x_2_0))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_2_2_1:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((mat_get(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1), (2), (1)))==(x_2_1))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_2_3_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((mat_get(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1), (3), (0)))==(x_3_0))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_2_3_1:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((mat_get(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1), (3), (1)))==(x_3_1))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_2_4_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((mat_get(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1), (4), (0)))==(x_4_0))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_2_4_1:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (
                                (\forall real x_0_1; (
                                    (\forall real x_1_1; (
                                        (\forall real x_2_1; (
                                            (\forall real x_3_1; (
                                                (\forall real x_4_1; (((mat_get(MatCst_5_2(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0, x_0_1, x_1_1, x_2_1, x_3_1, x_4_1), (4), (1)))==(x_4_1))
                                                ))
                                            ))
                                        ))
                                    ))
                                ))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        logic LMat MatCst_5_1(real x0, real x1, real x2, real x3, real x4);
        axiom getM_MatCst_5_1:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (((getM(MatCst_5_1(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0)))==((5)))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom getN_MatCst_5_1:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (((getN(MatCst_5_1(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0)))==((1)))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_1_0_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (((mat_get(MatCst_5_1(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0), (0), (0)))==(x_0_0))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_1_1_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (((mat_get(MatCst_5_1(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0), (1), (0)))==(x_1_0))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_1_2_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (((mat_get(MatCst_5_1(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0), (2), (0)))==(x_2_0))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_1_3_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (((mat_get(MatCst_5_1(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0), (3), (0)))==(x_3_0))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        axiom get_MatCst_5_1_4_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (
                    (\forall real x_2_0; (
                        (\forall real x_3_0; (
                            (\forall real x_4_0; (((mat_get(MatCst_5_1(x_0_0, x_1_0, x_2_0, x_3_0, x_4_0), (4), (0)))==(x_4_0))
                            ))
                        ))
                    ))
                ))
            ))
        ;
        logic LMat MatCst_2_1(real x0, real x1);
        axiom getM_MatCst_2_1:
            (\forall real x_0_0; (
                (\forall real x_1_0; (((getM(MatCst_2_1(x_0_0, x_1_0)))==((2)))
                ))
            ))
        ;
        axiom getN_MatCst_2_1:
            (\forall real x_0_0; (
                (\forall real x_1_0; (((getN(MatCst_2_1(x_0_0, x_1_0)))==((1)))
                ))
            ))
        ;
        axiom get_MatCst_2_1_0_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (((mat_get(MatCst_2_1(x_0_0, x_1_0), (0), (0)))==(x_0_0))
                ))
            ))
        ;
        axiom get_MatCst_2_1_1_0:
            (\forall real x_0_0; (
                (\forall real x_1_0; (((mat_get(MatCst_2_1(x_0_0, x_1_0), (1), (0)))==(x_1_0))
                ))
            ))
        ;
    }
*/
/*@
    axiomatic Optim
    {
        logic real sol(LMat x0, LMat x1, LMat x2);
        axiom sol_min:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat c; (
                        (\forall LMat x; (((mat_gt(mat_mult(A, x), b))==>(((dot(c, x))>=(sol(A, b, c)))))
                        ))
                    ))
                ))
            ))
        ;
        logic LMat hess(LMat x0, LMat x1, LMat x2);
        logic LMat grad(LMat x0, LMat x1, LMat x2);
        logic real norm(LMat x0, LMat x1, LMat x2, LMat x3) = \sqrt(mat_get(mat_mult(transpose(x2), mat_mult(inv(hess(x0, x1, x3)), x2)), (0), (0)))
        ;
        logic boolean acc(LMat x0, LMat x1, LMat x2, real x3, LMat x4, real x5) = ((norm(x0, x1, mat_add(grad(x0, x1, x4), mat_scal(x2, x3)), x4))<=(x5))
        ;
        logic real omega(real x0) = ((((x0)/((((1.0))-(x0)))))*(((x0)/((((1.0))-(x0))))))
        ;
        axiom getN_hess:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat X; (((getN(hess(A, b, X)))==(getN(A)))
                    ))
                ))
            ))
        ;
        axiom H_defpos:
            (\forall LMat A; (
                (\forall LMat b; (
                    (\forall LMat y; (
                        (\forall LMat x; (((((isnull(x))==((0))))==>(((mat_get(mat_mult(mat_mult(transpose(x), hess(A, b, y)), x), (0), (0)))>((0.0)))))
                        ))
                    ))
                ))
            ))
        ;
    }
*/
/*@
    axiomatic Optim_PF2
    {
        logic real LOWER(integer x0) = ((((x0)<((1))))?((-1.0)):(((((x0)>((1))))?((((1.125))*(LOWER(((x0)-((1))))))):((0.060894660159159085)))))
        ;
    }
*/






double pathfollowing_t;
double pathfollowing_dt;
double cholesky_PF2_sumcho;
int cholesky_PF2_i0;
int cholesky_PF2_i1;
int cholesky_PF2_i2;
double cholesky_PF2_sumLT;
double cholesky_PF2_sumUT;
double compute_dt_nc;
int pathfollowing_i0;



double pathfollowing_X[2];
double pathfollowing_dx[2];
double compute_pre_vals[5];
double compute_pre_grad[2];
double compute_pre_hess[4];
double cholesky_PF2_z[2];
double cholesky_PF2_A[4];
double cholesky_PF2_b[2];
double cholesky_PF2_D[4];
double cholesky_PF2_L[4];
double cholesky_PF2_xLT[2];
double cholesky_PF2_xUT[2];
double compute_dt_pre_nc[1];


#include "primalTest_contracts.h"



