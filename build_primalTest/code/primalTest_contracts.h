/*@
  @ requires acc(LOGIC_A, LOGIC_b, LOGIC_c, (0.0), MatVar(((double*)pathfollowing_X), (2), (1)), (0.1111111111111111));
  @ ensures mat_gt(LOGIC_b, mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))));
  @ ensures ((((dot(MatVar(((double*)pathfollowing_X), (2), (1)), LOGIC_c))-(sol(LOGIC_A, LOGIC_b, LOGIC_c))))<((1e-10)));
  @ assigns compute_dt_nc, *(cholesky_PF2_A+(0..4)), cholesky_PF2_sumcho, *(pathfollowing_X+(0..2)), *(cholesky_PF2_D+(0..4)), cholesky_PF2_sumUT, *(compute_dt_pre_nc+(0..1)), pathfollowing_t, *(compute_pre_grad+(0..2)), cholesky_PF2_i1, *(cholesky_PF2_L+(0..4)), *(compute_pre_hess+(0..4)), cholesky_PF2_i2, *(cholesky_PF2_xUT+(0..2)), pathfollowing_dt, *(pathfollowing_dx+(0..2)), *(cholesky_PF2_xLT+(0..2)), pathfollowing_i0, *(compute_pre_vals+(0..5)), cholesky_PF2_sumLT, cholesky_PF2_i0, *(cholesky_PF2_b+(0..2)), *(cholesky_PF2_z+(0..2));
  @ */
void pathfollowing();

/*@
  @ ensures ((MatVar(((double*)compute_pre_hess), (2), (2)))==(hess(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))));
  @ ensures ((MatVar(((double*)compute_pre_grad), (2), (1)))==(grad(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))));
  @ assigns *(compute_pre_vals+(0..5)), *(compute_pre_grad+(0..2)), *(compute_pre_hess+(0..4));
  @ */
void compute_pre();

/*@
  @ ensures ((MatVar(((double*)compute_pre_vals), (5), (1)))==(\old(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b))));
  @ assigns *(compute_pre_vals+(0..5));
  @ */
void set_compute_pre_vals();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_vals), (5), (1)), (0), (0)))==(\old(mat_get(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), (0), (0)))));
  @ assigns *(compute_pre_vals+(0..5));
  @ */
void set_compute_pre_vals_sub_0();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_vals), (5), (1)), (1), (0)))==(\old(mat_get(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), (1), (0)))));
  @ assigns *(compute_pre_vals+(0..5));
  @ */
void set_compute_pre_vals_sub_1();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_vals), (5), (1)), (2), (0)))==(\old(mat_get(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), (2), (0)))));
  @ assigns *(compute_pre_vals+(0..5));
  @ */
void set_compute_pre_vals_sub_2();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_vals), (5), (1)), (3), (0)))==(\old(mat_get(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), (3), (0)))));
  @ assigns *(compute_pre_vals+(0..5));
  @ */
void set_compute_pre_vals_sub_3();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_vals), (5), (1)), (4), (0)))==(\old(mat_get(mat_sub(mat_mult(LOGIC_A, MatVar(((double*)pathfollowing_X), (2), (1))), LOGIC_b), (4), (0)))));
  @ assigns *(compute_pre_vals+(0..5));
  @ */
void set_compute_pre_vals_sub_4();

/*@
  @ ensures ((MatVar(((double*)compute_pre_grad), (2), (1)))==(\old(unit((0.0), (2), (1)))));
  @ assigns *(compute_pre_grad+(0..2));
  @ */
void set_compute_pre_grad();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_grad), (2), (1)), (0), (0)))==(\old(mat_get(unit((0.0), (2), (1)), (0), (0)))));
  @ assigns *(compute_pre_grad+(0..2));
  @ */
void set_compute_pre_grad_sub_0();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_grad), (2), (1)), (1), (0)))==(\old(mat_get(unit((0.0), (2), (1)), (1), (0)))));
  @ assigns *(compute_pre_grad+(0..2));
  @ */
void set_compute_pre_grad_sub_1();

/*@
  @ ensures ((MatVar(((double*)compute_pre_hess), (2), (2)))==(\old(unit((0.0), (2), (2)))));
  @ assigns *(compute_pre_hess+(0..4));
  @ */
void set_compute_pre_hess();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (0), (0)))==(\old(mat_get(unit((0.0), (2), (2)), (0), (0)))));
  @ assigns *(compute_pre_hess+(0..4));
  @ */
void set_compute_pre_hess_sub_0();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (0), (1)))==(\old(mat_get(unit((0.0), (2), (2)), (0), (1)))));
  @ assigns *(compute_pre_hess+(0..4));
  @ */
void set_compute_pre_hess_sub_1();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (1), (0)))==(\old(mat_get(unit((0.0), (2), (2)), (1), (0)))));
  @ assigns *(compute_pre_hess+(0..4));
  @ */
void set_compute_pre_hess_sub_2();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (1), (1)))==(\old(mat_get(unit((0.0), (2), (2)), (1), (1)))));
  @ assigns *(compute_pre_hess+(0..4));
  @ */
void set_compute_pre_hess_sub_3();

/*@
  @ requires ((MatVar(((double*)compute_pre_hess), (2), (2)))==(hess(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))));
  @ requires ((MatVar(((double*)compute_pre_grad), (2), (1)))==(grad(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))));
  @ ensures ((MatVar(((double*)pathfollowing_dx), (2), (1)))==(mat_scal(mat_mult(inv(hess(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))), mat_add(grad(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1))), mat_scal(LOGIC_c, pathfollowing_t))), (-1.0))));
  @ assigns *(cholesky_PF2_xLT+(0..2)), cholesky_PF2_sumcho, cholesky_PF2_i2, *(cholesky_PF2_D+(0..4)), cholesky_PF2_sumLT, *(cholesky_PF2_A+(0..4)), cholesky_PF2_sumUT, *(cholesky_PF2_xUT+(0..2)), cholesky_PF2_i1, *(cholesky_PF2_L+(0..4)), cholesky_PF2_i0, *(cholesky_PF2_b+(0..2)), *(cholesky_PF2_z+(0..2)), *(pathfollowing_dx+(0..2));
  @ */
void compute_dx();

/*@
  @ ensures ((MatVar(((double*)cholesky_PF2_b), (2), (1)))==(mat_mult(MatVar(((double*)cholesky_PF2_A), (2), (2)), MatVar(((double*)cholesky_PF2_xUT), (2), (1)))));
  @ assigns *(cholesky_PF2_xLT+(0..2)), cholesky_PF2_sumcho, cholesky_PF2_i2, *(cholesky_PF2_D+(0..4)), cholesky_PF2_sumLT, cholesky_PF2_sumUT, *(cholesky_PF2_xUT+(0..2)), cholesky_PF2_i1, *(cholesky_PF2_L+(0..4)), cholesky_PF2_i0, *(cholesky_PF2_z+(0..2));
  @ */
void cholesky_PF2();

/*@
  @ ensures ((MatVar(((double*)cholesky_PF2_A), (2), (2)))==(\old(MatVar(((double*)compute_pre_hess), (2), (2)))));
  @ assigns *(cholesky_PF2_A+(0..4));
  @ */
void set_cholesky_PF2_A();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (0), (0)))==(\old(mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (0), (0)))));
  @ assigns *(cholesky_PF2_A+(0..4));
  @ */
void set_cholesky_PF2_A_sub_0();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (0), (1)))==(\old(mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (0), (1)))));
  @ assigns *(cholesky_PF2_A+(0..4));
  @ */
void set_cholesky_PF2_A_sub_1();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (1), (0)))==(\old(mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (1), (0)))));
  @ assigns *(cholesky_PF2_A+(0..4));
  @ */
void set_cholesky_PF2_A_sub_2();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (1), (1)))==(\old(mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (1), (1)))));
  @ assigns *(cholesky_PF2_A+(0..4));
  @ */
void set_cholesky_PF2_A_sub_3();

/*@
  @ ensures ((MatVar(((double*)cholesky_PF2_b), (2), (1)))==(\old(mat_add(MatVar(((double*)compute_pre_grad), (2), (1)), mat_scal(LOGIC_c, pathfollowing_t)))));
  @ assigns *(cholesky_PF2_b+(0..2));
  @ */
void set_cholesky_PF2_b();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_b), (2), (1)), (0), (0)))==(\old(mat_get(mat_add(MatVar(((double*)compute_pre_grad), (2), (1)), mat_scal(LOGIC_c, pathfollowing_t)), (0), (0)))));
  @ assigns *(cholesky_PF2_b+(0..2));
  @ */
void set_cholesky_PF2_b_sub_0();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_b), (2), (1)), (1), (0)))==(\old(mat_get(mat_add(MatVar(((double*)compute_pre_grad), (2), (1)), mat_scal(LOGIC_c, pathfollowing_t)), (1), (0)))));
  @ assigns *(cholesky_PF2_b+(0..2));
  @ */
void set_cholesky_PF2_b_sub_1();

/*@
  @ ensures ((MatVar(((double*)pathfollowing_dx), (2), (1)))==(\old(mat_scal(MatVar(((double*)cholesky_PF2_xUT), (2), (1)), (-1.0)))));
  @ assigns *(pathfollowing_dx+(0..2));
  @ */
void set_pathfollowing_dx();

/*@
  @ ensures ((mat_get(MatVar(((double*)pathfollowing_dx), (2), (1)), (0), (0)))==(\old(mat_get(mat_scal(MatVar(((double*)cholesky_PF2_xUT), (2), (1)), (-1.0)), (0), (0)))));
  @ assigns *(pathfollowing_dx+(0..2));
  @ */
void set_pathfollowing_dx_sub_0();

/*@
  @ ensures ((mat_get(MatVar(((double*)pathfollowing_dx), (2), (1)), (1), (0)))==(\old(mat_get(mat_scal(MatVar(((double*)cholesky_PF2_xUT), (2), (1)), (-1.0)), (1), (0)))));
  @ assigns *(pathfollowing_dx+(0..2));
  @ */
void set_pathfollowing_dx_sub_1();

/*@
  @ requires acc(LOGIC_A, LOGIC_b, LOGIC_c, pathfollowing_t, MatVar(((double*)pathfollowing_X), (2), (1)), (0.25));
  @ requires ((MatVar(((double*)compute_pre_hess), (2), (2)))==(hess(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))));
  @ requires ((MatVar(((double*)compute_pre_grad), (2), (1)))==(grad(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))));
  @ ensures acc(LOGIC_A, LOGIC_b, LOGIC_c, pathfollowing_t, MatVar(((double*)pathfollowing_X), (2), (1)), (0.1111111111111111));
  @ assigns *(cholesky_PF2_xLT+(0..2)), cholesky_PF2_sumcho, cholesky_PF2_i2, *(pathfollowing_X+(0..2)), *(cholesky_PF2_D+(0..4)), cholesky_PF2_sumLT, *(cholesky_PF2_A+(0..4)), cholesky_PF2_sumUT, *(cholesky_PF2_xUT+(0..2)), cholesky_PF2_i1, *(cholesky_PF2_L+(0..4)), cholesky_PF2_i0, *(cholesky_PF2_b+(0..2)), *(cholesky_PF2_z+(0..2)), *(pathfollowing_dx+(0..2));
  @ */
void update_x();

/*@
  @ ensures ((MatVar(((double*)pathfollowing_X), (2), (1)))==(\old(mat_add(MatVar(((double*)pathfollowing_X), (2), (1)), MatVar(((double*)pathfollowing_dx), (2), (1))))));
  @ assigns *(pathfollowing_X+(0..2));
  @ */
void set_pathfollowing_X();

/*@
  @ ensures ((mat_get(MatVar(((double*)pathfollowing_X), (2), (1)), (0), (0)))==(\old(mat_get(mat_add(MatVar(((double*)pathfollowing_X), (2), (1)), MatVar(((double*)pathfollowing_dx), (2), (1))), (0), (0)))));
  @ assigns *(pathfollowing_X+(0..2));
  @ */
void set_pathfollowing_X_sub_0();

/*@
  @ ensures ((mat_get(MatVar(((double*)pathfollowing_X), (2), (1)), (1), (0)))==(\old(mat_get(mat_add(MatVar(((double*)pathfollowing_X), (2), (1)), MatVar(((double*)pathfollowing_dx), (2), (1))), (1), (0)))));
  @ assigns *(pathfollowing_X+(0..2));
  @ */
void set_pathfollowing_X_sub_1();

/*@
  @ requires ((MatVar(((double*)compute_pre_hess), (2), (2)))==(hess(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))));
  @ ensures ((pathfollowing_dt)==((((0.1388888888888889))/(norm(LOGIC_A, LOGIC_b, LOGIC_c, MatVar(((double*)pathfollowing_X), (2), (1)))))));
  @ assigns *(cholesky_PF2_xLT+(0..2)), cholesky_PF2_sumcho, compute_dt_nc, cholesky_PF2_i2, *(cholesky_PF2_D+(0..4)), cholesky_PF2_sumLT, *(cholesky_PF2_A+(0..4)), cholesky_PF2_sumUT, *(compute_dt_pre_nc+(0..1)), *(cholesky_PF2_xUT+(0..2)), cholesky_PF2_i1, *(cholesky_PF2_L+(0..4)), cholesky_PF2_i0, *(cholesky_PF2_b+(0..2)), *(cholesky_PF2_z+(0..2)), pathfollowing_dt;
  @ */
void compute_dt();

/*@
  @ ensures ((MatVar(((double*)cholesky_PF2_A), (2), (2)))==(\old(MatVar(((double*)compute_pre_hess), (2), (2)))));
  @ assigns *(cholesky_PF2_A+(0..4));
  @ */
void set_cholesky_PF2_A1();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (0), (0)))==(\old(mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (0), (0)))));
  @ assigns *(cholesky_PF2_A+(0..4));
  @ */
void set_cholesky_PF2_A1_sub_0();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (0), (1)))==(\old(mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (0), (1)))));
  @ assigns *(cholesky_PF2_A+(0..4));
  @ */
void set_cholesky_PF2_A1_sub_1();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (1), (0)))==(\old(mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (1), (0)))));
  @ assigns *(cholesky_PF2_A+(0..4));
  @ */
void set_cholesky_PF2_A1_sub_2();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_A), (2), (2)), (1), (1)))==(\old(mat_get(MatVar(((double*)compute_pre_hess), (2), (2)), (1), (1)))));
  @ assigns *(cholesky_PF2_A+(0..4));
  @ */
void set_cholesky_PF2_A1_sub_3();

/*@
  @ ensures ((MatVar(((double*)cholesky_PF2_b), (2), (1)))==(\old(LOGIC_c)));
  @ assigns *(cholesky_PF2_b+(0..2));
  @ */
void set_cholesky_PF2_b1();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_b), (2), (1)), (0), (0)))==(\old(mat_get(LOGIC_c, (0), (0)))));
  @ assigns *(cholesky_PF2_b+(0..2));
  @ */
void set_cholesky_PF2_b1_sub_0();

/*@
  @ ensures ((mat_get(MatVar(((double*)cholesky_PF2_b), (2), (1)), (1), (0)))==(\old(mat_get(LOGIC_c, (1), (0)))));
  @ assigns *(cholesky_PF2_b+(0..2));
  @ */
void set_cholesky_PF2_b1_sub_1();

/*@
  @ ensures ((MatVar(((double*)compute_dt_pre_nc), (1), (1)))==(\old(mat_mult(transpose(LOGIC_c), MatVar(((double*)cholesky_PF2_xUT), (2), (1))))));
  @ assigns *(compute_dt_pre_nc+(0..1));
  @ */
void set_compute_dt_pre_nc();

/*@
  @ ensures ((mat_get(MatVar(((double*)compute_dt_pre_nc), (1), (1)), (0), (0)))==(\old(mat_get(mat_mult(transpose(LOGIC_c), MatVar(((double*)cholesky_PF2_xUT), (2), (1))), (0), (0)))));
  @ assigns *(compute_dt_pre_nc+(0..1));
  @ */
void set_compute_dt_pre_nc_sub_0();

/*@
  @ requires ((mat_get(MatVar(((double*)compute_dt_pre_nc), (1), (1)), (0), (0)))>=((0.0)));
  @ ensures ((compute_dt_nc)==(\sqrt(mat_get(MatVar(((double*)compute_dt_pre_nc), (1), (1)), (0), (0)))));
  @ assigns compute_dt_nc;
  @ */
void set_nc();

/*@
  @ requires ((MatVar(((double*)compute_pre_hess), (2), (2)))==(hess(LOGIC_A, LOGIC_b, MatVar(((double*)pathfollowing_X), (2), (1)))));
  @ requires acc(LOGIC_A, LOGIC_b, LOGIC_c, pathfollowing_t, MatVar(((double*)pathfollowing_X), (2), (1)), (0.1111111111111111));
  @ ensures acc(LOGIC_A, LOGIC_b, LOGIC_c, pathfollowing_t, MatVar(((double*)pathfollowing_X), (2), (1)), (0.25));
  @ ensures ((pathfollowing_t)>(((\old(pathfollowing_t))*((1.125)))));
  @ assigns *(cholesky_PF2_xLT+(0..2)), cholesky_PF2_sumcho, compute_dt_nc, cholesky_PF2_i2, *(cholesky_PF2_D+(0..4)), cholesky_PF2_sumLT, *(cholesky_PF2_A+(0..4)), cholesky_PF2_sumUT, *(compute_dt_pre_nc+(0..1)), *(cholesky_PF2_xUT+(0..2)), pathfollowing_t, cholesky_PF2_i1, *(cholesky_PF2_L+(0..4)), cholesky_PF2_i0, *(cholesky_PF2_b+(0..2)), *(cholesky_PF2_z+(0..2)), pathfollowing_dt;
  @ */
void update_t();

/*@
  @ assigns compute_dt_nc, *(cholesky_PF2_A+(0..4)), cholesky_PF2_sumcho, *(pathfollowing_X+(0..2)), *(cholesky_PF2_D+(0..4)), cholesky_PF2_sumUT, *(compute_dt_pre_nc+(0..1)), pathfollowing_t, *(compute_pre_grad+(0..2)), cholesky_PF2_i1, *(cholesky_PF2_L+(0..4)), *(compute_pre_hess+(0..4)), cholesky_PF2_i2, *(cholesky_PF2_xUT+(0..2)), pathfollowing_dt, *(pathfollowing_dx+(0..2)), *(cholesky_PF2_xLT+(0..2)), pathfollowing_i0, *(compute_pre_vals+(0..5)), cholesky_PF2_sumLT, cholesky_PF2_i0, *(cholesky_PF2_b+(0..2)), *(cholesky_PF2_z+(0..2));
  @ */
void compute();

/*@
  @ ensures ((MatVar(((double*)pathfollowing_X), (2), (1)))==(\old(LOGIC_CA)));
  @ assigns *(pathfollowing_X+(0..2));
  @ */
void set_pathfollowing_X1();

/*@
  @ ensures ((mat_get(MatVar(((double*)pathfollowing_X), (2), (1)), (0), (0)))==(\old(mat_get(LOGIC_CA, (0), (0)))));
  @ assigns *(pathfollowing_X+(0..2));
  @ */
void set_pathfollowing_X1_sub_0();

/*@
  @ ensures ((mat_get(MatVar(((double*)pathfollowing_X), (2), (1)), (1), (0)))==(\old(mat_get(LOGIC_CA, (1), (0)))));
  @ assigns *(pathfollowing_X+(0..2));
  @ */
void set_pathfollowing_X1_sub_1();
