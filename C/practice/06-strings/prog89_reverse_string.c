// Reverse a string using a function
#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        char temp       = str[i];
        str[i]          = str[length - 1 - i];
        str[length-1-i] = temp;
    }
}

int main()
{
    char x[100];
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter a string: ");
    fgets(x, sizeof(x), stdin);
    size_t length = strlen(x);
    if (length > 0 && x[length - 1] == '\n') x[length - 1] = '\0';
    reverseString(x);
    printf("The Reversed String Is: %s\n", x);
    return 0;
}
