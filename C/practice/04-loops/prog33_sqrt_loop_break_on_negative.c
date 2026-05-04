// Calculate square root in a loop; break when input is negative
#include <stdio.h>
#include <math.h>

int main()
{
    double y, z;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    while (1) {
        printf("Enter a number (negative to quit): ");
        scanf("%lf", &y);
        if (y < 0) break;
        z = sqrt(y);
        printf("Square root of %.0lf = %.3lf\n", y, z);
    }
    return 0;
}
