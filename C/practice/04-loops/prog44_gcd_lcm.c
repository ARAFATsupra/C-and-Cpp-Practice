// Calculate GCD and LCM of two numbers
#include <stdio.h>

int main()
{
    int x, y, a, b, i;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a && i <= b; ++i)
        if (a % i == 0 && b % i == 0) x = i;
    printf("GCD of %d and %d = %d\n", a, b, x);
    y = (a * b) / x;
    printf("LCM of %d and %d = %d\n", a, b, y);
    return 0;
}
