// Calculate sum of square roots and factorial using a single function
// ARAFAT 0242320005191008
#include <stdio.h>
#include <math.h>

void calculate(double a, double b, double *sum_sqrt, unsigned long long *product) {
    *sum_sqrt = sqrt(a) + sqrt(b);
    *product  = 1;
    for (int i = 1; i <= (int)a; i++) *product *= i;
}

int main()
{
    double a, b;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter two numbers A and B: ");
    scanf("%lf %lf", &a, &b);
    double sum_sqrt;
    unsigned long long product;
    calculate(a, b, &sum_sqrt, &product);
    printf("Sum of square roots: %.2f\n",        sum_sqrt);
    printf("Product (1 to A):   %llu\n",          product);
    return 0;
}
