// Swap two values without a third variable
#include <stdio.h>

int main()
{
    int x = 10, y = 20;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Swapped x = %d\n", x);
    printf("Swapped y = %d\n", y);
    return 0;
}
