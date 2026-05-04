// Print the multiplication table of a number
#include <stdio.h>

int main()
{
    int Num, x;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter a number: ");
    scanf("%d", &Num);
    printf("Multiplication table of %d:\n\n", Num);
    for (x = 1; x <= 10; x++) printf(" %d X %d = %d\n", Num, x, Num * x);
    return 0;
}
