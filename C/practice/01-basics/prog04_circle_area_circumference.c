// Area and circumference of a circle
#include <stdio.h>

int main()
{
    const double pi = 3.1416;
    double radius, area, circumference;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter the radius of a circle = ");
    scanf("%lf", &radius);
    area          = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("The Area of a circle is = %.3lf\n",          area);
    printf("The Circumference of a circle is = %.3lf\n", circumference);
    return 0;
}
