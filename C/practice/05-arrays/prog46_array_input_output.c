#include <stdio.h>

int main()
{
    int i, x[10];
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter 10 numbers: ");
    for (i = 0; i <= 9; i++) scanf("%d", &x[i]);
    printf("You entered: ");
    for (i = 0; i <= 9; i++) printf("%d ", x[i]);
    printf("\n");
    return 0;
}
