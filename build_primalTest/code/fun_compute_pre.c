
#include "primalTest.h"



void compute_pre()
{
    set_compute_pre_vals();
    set_compute_pre_grad();
    compute_pre_grad[(0)] = ((compute_pre_grad[(0)])-((((3.0))/(compute_pre_vals[(0)]))));
    compute_pre_grad[(1)] = ((compute_pre_grad[(1)])-((((-3.0))/(compute_pre_vals[(0)]))));
    compute_pre_grad[(0)] = ((compute_pre_grad[(0)])-(1/(compute_pre_vals[(1)])));
    compute_pre_grad[(1)] = ((compute_pre_grad[(1)])-(1/(compute_pre_vals[(1)])));
    compute_pre_grad[(0)] = ((compute_pre_grad[(0)])-((((-5.0))/(compute_pre_vals[(2)]))));
    compute_pre_grad[(1)] = ((compute_pre_grad[(1)])-((((-1.0))/(compute_pre_vals[(2)]))));
    compute_pre_grad[(0)] = ((compute_pre_grad[(0)])-((((-1.0))/(compute_pre_vals[(3)]))));
    compute_pre_grad[(1)] = ((compute_pre_grad[(1)])-((((2.0))/(compute_pre_vals[(3)]))));
    compute_pre_grad[(0)] = ((compute_pre_grad[(0)])-(1/(compute_pre_vals[(4)])));
    compute_pre_grad[(1)] = ((compute_pre_grad[(1)])-((((-6.0))/(compute_pre_vals[(4)]))));
    set_compute_pre_hess();
    compute_pre_hess[(0)] = ((compute_pre_hess[(0)])+((((9.0))/(((compute_pre_vals[(0)])*(compute_pre_vals[(0)]))))));
    compute_pre_hess[(2)] = ((compute_pre_hess[(2)])+((((-9.0))/(((compute_pre_vals[(0)])*(compute_pre_vals[(0)]))))));
    compute_pre_hess[(3)] = ((compute_pre_hess[(3)])+((((9.0))/(((compute_pre_vals[(0)])*(compute_pre_vals[(0)]))))));
    compute_pre_hess[(0)] = ((compute_pre_hess[(0)])+(1/(((compute_pre_vals[(1)])*(compute_pre_vals[(1)])))));
    compute_pre_hess[(2)] = ((compute_pre_hess[(2)])+(1/(((compute_pre_vals[(1)])*(compute_pre_vals[(1)])))));
    compute_pre_hess[(3)] = ((compute_pre_hess[(3)])+(1/(((compute_pre_vals[(1)])*(compute_pre_vals[(1)])))));
    compute_pre_hess[(0)] = ((compute_pre_hess[(0)])+((((25.0))/(((compute_pre_vals[(2)])*(compute_pre_vals[(2)]))))));
    compute_pre_hess[(2)] = ((compute_pre_hess[(2)])+((((5.0))/(((compute_pre_vals[(2)])*(compute_pre_vals[(2)]))))));
    compute_pre_hess[(3)] = ((compute_pre_hess[(3)])+(1/(((compute_pre_vals[(2)])*(compute_pre_vals[(2)])))));
    compute_pre_hess[(0)] = ((compute_pre_hess[(0)])+(1/(((compute_pre_vals[(3)])*(compute_pre_vals[(3)])))));
    compute_pre_hess[(2)] = ((compute_pre_hess[(2)])+((((-2.0))/(((compute_pre_vals[(3)])*(compute_pre_vals[(3)]))))));
    compute_pre_hess[(3)] = ((compute_pre_hess[(3)])+((((4.0))/(((compute_pre_vals[(3)])*(compute_pre_vals[(3)]))))));
    compute_pre_hess[(0)] = ((compute_pre_hess[(0)])+(1/(((compute_pre_vals[(4)])*(compute_pre_vals[(4)])))));
    compute_pre_hess[(2)] = ((compute_pre_hess[(2)])+((((-6.0))/(((compute_pre_vals[(4)])*(compute_pre_vals[(4)]))))));
    compute_pre_hess[(3)] = ((compute_pre_hess[(3)])+((((36.0))/(((compute_pre_vals[(4)])*(compute_pre_vals[(4)]))))));
    compute_pre_hess[(1)] = compute_pre_hess[(2)];
}