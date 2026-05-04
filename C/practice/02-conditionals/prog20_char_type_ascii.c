// Determine whether a character is capital, small, digit, or special symbol (using ASCII)
#include <stdio.h>

int main()
{
    char x;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter a letter: ");
    scanf("%c", &x);
    if      (x >= 65 && x <= 96)  printf("This letter is Capital.\n");
    else if (x >= 97 && x <= 123) printf("This letter is Small.\n");
    else if (x >= 48 && x <= 58)  printf("This letter is a Digit.\n");
    else                          printf("This letter is a Special Symbol.\n");
    return 0;
}
