// Four arithmetic functions: add, subtract, multiply, divide
// ARAFAT-0242320005191008
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divd(int a, int b);

int main()
{
    int x, y;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);
    printf("Addition:       %d\n", add(x, y));
    printf("Subtraction:    %d\n", sub(x, y));
    printf("Multiplication: %d\n", mul(x, y));
    printf("Division:       %d\n", divd(x, y));
    return 0;
}

int add(int a, int b)  { return a + b; }
int sub(int a, int b)  { return a - b; }
int mul(int a, int b)  { return a * b; }
int divd(int a, int b) { return a / b; }
