#include <stdio.h>

int sumOfNumbers(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int total = sumOfNumbers(n);
    printf("Sum from 1 to %d is: %d\n", n, total);
    return 0;
}

int sumOfNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    return sum;
}
