#include <stdio.h>

int main()
{
    int Num;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter a number: ");
    scanf("%d", &Num);
    if      (Num%5 == 0 && Num%11 == 0) printf("Divisible by both 5 and 11\n");
    else if (Num%5 == 0)                printf("Divisible by 5 but not 11\n");
    else if (Num%11 == 0)               printf("Divisible by 11 but not 5\n");
    else                                printf("Not divisible by both 5 and 11\n");
    return 0;
}
