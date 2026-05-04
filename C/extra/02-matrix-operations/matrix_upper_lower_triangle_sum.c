#include <stdio.h>

int main() {
    int A[3][3], i, j, uppersum = 0, lowersum = 0;
    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            if (i < j) uppersum += A[i][j];
            if (i > j) lowersum += A[i][j];
        }

    printf("Sum of Upper Triangle Elements = %d\n", uppersum);
    printf("Sum of Lower Triangle Elements = %d\n", lowersum);
    return 0;
}
