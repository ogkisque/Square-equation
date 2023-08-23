#include "input_output.h"
#include "solver.h"
#include "tests.h"
#include <stdio.h>

#define TEST_MODE

int main ()
{
    #ifdef TEST_MODE
    all_tests ();
    #endif
    printf ("# Hello! This program will solve your quadratic equation.\n");
    double a = 0, b = 0, c = 0;
    input_double (&a, &b, &c);

    double x1 = 0, x2 = 0;
    int n_roots = solve_equation (a, b, c, &x1, &x2);

    output_answer (n_roots, x1, x2);
}