// Sum of all elements in a dynamic array
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &array[i]);
    for (i = 0; i < n; i++) sum += array[i];
    printf("Sum of all elements: %d\n", sum);
    return 0;
}
