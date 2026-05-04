// Simple and compound interest calculator
#include <stdio.h>
#include <math.h>

int main()
{
    float I, C, P, p, r, n;
    printf("\t\tWelcome to the Simple & Compound Calculator Program!!\n\n");
    printf("Enter principal amount, interest rate & time (in years): ");
    scanf("%f%f%f", &P, &r, &n);
    I = P * r * n / 100;
    p = 1 + (r / 100);
    C = P * pow(p, n);
    printf("Simple Interest   = %.2f Taka\n", I);
    printf("Compound Interest = %.2f Taka\n", C);
    return 0;
}
