// Sum of elements at checkerboard positions (where i+j is even)
// ARAFAT 0242320005191008
#include <stdio.h>

int main()
{
    int i, j, n;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) scanf("%d", &matrix[i][j]);
    int sum = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if ((i + j) % 2 == 0) sum += matrix[i][j];
    printf("Sum of checkerboard elements: %d\n", sum);
    return 0;
}
