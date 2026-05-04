// Remove digits and special symbols from a string, keeping only letters
#include <stdio.h>

void removeDigitsAndSymbols(char *str) {
    char result[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; ++i)
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            result[j++] = str[i];
    result[j] = '\0';
    for (int i = 0; result[i] != '\0'; ++i) str[i] = result[i];
    str[j] = '\0';
}

int main()
{
    char x[100];
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter a string with alphabets, digits and symbols: ");
    fgets(x, sizeof(x), stdin);
    removeDigitsAndSymbols(x);
    printf("After removing digits and special symbols: %s\n", x);
    return 0;
}
