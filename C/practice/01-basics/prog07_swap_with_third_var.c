// Swap two values using a third variable
#include <stdio.h>

int main()
{
    int x = 10, y = 20, z;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    z = x; x = y; y = z;
    printf("Swapped x = %d\n", x);
    printf("Swapped y = %d\n", y);
    return 0;
}
