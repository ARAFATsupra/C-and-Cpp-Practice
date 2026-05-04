#include <stdio.h>
#include <string.h>

// Transforms "ABCDEF" into "DEFABC" by swapping halves
int main() {
    char str[] = "ABCDEF";
    char temp[7];
    strncpy(temp, str + 3, 3);
    strncpy(temp + 3, str, 3);
    temp[6] = '\0';
    printf("Original string: %s\n", str);
    printf("Rotated string:  %s\n", temp);
    return 0;
}
