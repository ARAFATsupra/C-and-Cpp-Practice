#include <stdio.h>

int main() {
    int i, j, rows, columns;
    printf("Enter the number of rows: ");    scanf("%d", &rows);
    printf("Enter the number of columns: "); scanf("%d", &columns);

    int array[rows][columns];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }

    for (i = 0; i < rows; i++) {
        int rowSum = 0;
        for (j = 0; j < columns; j++) rowSum += array[i][j];
        printf("Sum of row %d: %d\n", i, rowSum);
    }

    for (j = 0; j < columns; j++) {
        int colSum = 0;
        for (i = 0; i < rows; i++) colSum += array[i][j];
        printf("Sum of column %d: %d\n", j, colSum);
    }
    return 0;
}
