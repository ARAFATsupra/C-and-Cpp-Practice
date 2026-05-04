#include <stdio.h>

int main() {
    int rowsA, colsA, rowsB, colsB;
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int A[rowsA][colsA], B[rowsB][colsB], C[rowsA][colsB];

    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsA; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rowsB; i++)
        for (int j = 0; j < colsB; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Product Matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
