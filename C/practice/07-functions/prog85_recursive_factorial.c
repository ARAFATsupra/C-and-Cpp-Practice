// Recursive factorial function
// ARAFAT-0242320005191008
#include <stdio.h>

unsigned long long factorial(int n);

int main()
{
    int num;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    if (num < 0) printf("Factorial of a negative number is not defined.\n");
    else         printf("Factorial of %d = %llu\n", num, factorial(num));
    return 0;
}

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
