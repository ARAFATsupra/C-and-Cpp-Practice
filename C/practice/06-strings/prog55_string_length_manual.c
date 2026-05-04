// Count string length without library functions
#include <stdio.h>

int main()
{
    char name[20];
    scanf("%s", name);
    printf("%s\n", name);
    int i = 0, count = 0;
    while (name[i] != '\0') { count++; i++; }
    printf("Length of the string: %d\n", count);
    return 0;
}
