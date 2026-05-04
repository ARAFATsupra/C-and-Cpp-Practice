#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hella";
    int result = strncmp(str1, str2, 4);
    if      (result == 0) printf("The strings are equal up to 4 characters.\n");
    else if (result  < 0) printf("'%s' is less than '%s' (first 4 chars).\n",    str1, str2);
    else                  printf("'%s' is greater than '%s' (first 4 chars).\n", str1, str2);
    return 0;
}
