// Increment three numbers by passing their addresses (pointers)
// ARAFAT-0242320005191008
#include <stdio.h>

void incre(int *x, int *y, int *z);

int main()
{
    int a, b, c;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter 3 numbers:\n");
    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    printf("c: "); scanf("%d", &c);
    printf("\nOriginal: a=%d, b=%d, c=%d\n", a, b, c);
    incre(&a, &b, &c);
    printf("After increment: a=%d, b=%d, c=%d\n", a, b, c);
    return 0;
}

void incre(int *x, int *y, int *z) { (*x)++; (*y)++; (*z)++; }
