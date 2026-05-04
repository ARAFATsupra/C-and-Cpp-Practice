// Check whether the entered year is a leap year
#include <stdio.h>

int main()
{
    int year, x, y, z;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter a year: ");
    scanf("%d", &year);
    x = year % 400; y = year % 100; z = year % 4;
    if      (x == 0)              printf("This year is a Leap Year.\n");
    else if (y != 0 && z == 0)    printf("This year is a Leap Year.\n");
    else                          printf("This year is not a leap year.\n");
    return 0;
}
