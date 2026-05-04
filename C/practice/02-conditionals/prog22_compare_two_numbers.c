#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &x, &y);
    if      (x > y) printf(">\n");
    else if (x < y) printf("<\n");
    else            printf("=\n");
    return 0;
}
