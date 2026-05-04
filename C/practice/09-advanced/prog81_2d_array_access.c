// Access a specific element from a 2D array by row and column index
// ARAFAT 0242320005191008
#include <stdio.h>

int main()
{
    int rows, cols, i, j, rowIndex, colIndex;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int array[rows][cols];
    printf("Enter the elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) scanf("%d", &array[i][j]);
    printf("Enter row and column index to access: ");
    scanf("%d %d", &rowIndex, &colIndex);
    if (rowIndex >= 0 && rowIndex < rows && colIndex >= 0 && colIndex < cols)
        printf("Element at [%d][%d]: %d\n", rowIndex, colIndex, array[rowIndex][colIndex]);
    else
        printf("Invalid indices.\n");
    return 0;
}
