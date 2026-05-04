#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = x % 2;
    if (y == 0) printf("The number is even.\n");
    else        printf("The number is odd.\n");
    return 0;
}
