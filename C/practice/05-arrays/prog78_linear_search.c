// Linear search in an array
#include <stdio.h>

int main()
{
    int n, i, x, found = 0;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &array[i]);
    printf("Enter the element to search: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
        if (array[i] == x) { printf("Element found at index %d\n", i); found = 1; break; }
    if (!found) printf("Element not found in the array\n");
    return 0;
}
