// Concatenate two strings using strcat
#include <stdio.h>
#include <string.h>

int main()
{
    char x[20] = "Arafat ";
    char y[10] = "Sakib.";
    printf("\t\t\tWelcome to the C Program!!\n\n");
    strcat(x, y);
    printf("The concatenated string is: %s\n", x);
    return 0;
}
