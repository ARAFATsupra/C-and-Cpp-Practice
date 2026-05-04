#include <stdio.h>

int main()
{
    int i, x[5], sum = 1;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter 5 positive numbers: ");
    for (i = 0; i <= 4; i++) scanf("%d", &x[i]);
    for (i = 0; i <= 4; i++) sum *= x[i];
    printf("The calculated product is = %d\n", sum);
    return 0;
}
