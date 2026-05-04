// Count the total number of words in a string
#include <stdio.h>
#include <string.h>

int countWords(const char *str) {
    int a = 0, wordCount = 0;
    while (*str) {
        if (*str == ' ' || *str == '\t' || *str == '\n') a = 0;
        else if (a == 0) { a = 1; ++wordCount; }
        ++str;
    }
    return wordCount;
}

int main()
{
    char x[100];
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter a string: ");
    fgets(x, sizeof(x), stdin);
    size_t length = strlen(x);
    if (length > 0 && x[length - 1] == '\n') x[length - 1] = '\0';
    printf("Total number of words: %d\n", countWords(x));
    return 0;
}
