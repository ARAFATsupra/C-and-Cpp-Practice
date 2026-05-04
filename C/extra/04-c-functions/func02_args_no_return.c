#include <stdio.h>

void sum(int a, int b);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum(num1, num2);
    return 0;
}

void sum(int a, int b) {
    printf("Sum: %d\n", a + b);
}
