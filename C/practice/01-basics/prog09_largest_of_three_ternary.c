// Find the largest of three numbers using ternary operators
#include <stdio.h>

int main()
{
    double x, y, z, largest;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter 3 numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    largest = (x >= y && x >= z) ? x : ((y >= x && y >= z) ? y : z);
    printf("The largest number is = %.2lf\n", largest);
    return 0;
}
