// Find the largest and smallest element in an array
#include <stdio.h>

int main()
{
    int n, i;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &array[i]);
    int largest = array[0], smallest = array[0];
    for (i = 1; i < n; i++) {
        if (array[i] > largest)  largest  = array[i];
        if (array[i] < smallest) smallest = array[i];
    }
    printf("Largest element:  %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}
