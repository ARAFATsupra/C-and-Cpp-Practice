#include <stdio.h>

int factorial();

int main() {
    printf("Factorial: %d\n", factorial());
    return 0;
}

int factorial() {
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) fact *= i;
    return fact;
}
