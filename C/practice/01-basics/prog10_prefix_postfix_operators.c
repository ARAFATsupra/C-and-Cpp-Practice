// Prefix and postfix increment/decrement operators
#include <stdio.h>

int main()
{
    int x = 100;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Original x          = %d\n", x);
    printf("Prefix  increment   = %d\n", ++x); x = 100;
    printf("Postfix increment   = %d\n", x++); x = 100;
    printf("Prefix  decrement   = %d\n", --x); x = 100;
    printf("Postfix decrement   = %d\n", x--);
    return 0;
}
