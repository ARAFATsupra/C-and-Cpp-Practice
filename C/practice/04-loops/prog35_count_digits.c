// Count the number of digits in a number
#include <stdio.h>

int main()
{
    int count = 0, x;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter a number: ");
    scanf("%d", &x);
    while (1) {
        x = x / 10;
        count++;
        if (x == 0) break;
    }
    printf("The digit count is = %d\n", count);
    return 0;
}
