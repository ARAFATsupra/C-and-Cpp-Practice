#include <stdio.h>

int main() {
    int A[2][2], i, j, sum = 0;
    printf("Enter elements for a 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }

    printf("\nDiagonal Elements:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            if (i == j) {
                printf("%d\n", A[i][j]);
                sum += A[i][j];
            }

    printf("Sum of Diagonal Elements = %d\n", sum);
    return 0;
}
