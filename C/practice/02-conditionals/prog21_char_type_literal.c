// Same as prog20 but using character literals instead of ASCII values
#include <stdio.h>

int main()
{
    char x;
    printf("Enter a letter: ");
    scanf("%c", &x);
    if      (x >= 'A' && x <= 'Z') printf("This letter is Capital.\n");
    else if (x >= 'a' && x <= 'z') printf("This letter is Small.\n");
    else if (x >= '0' && x <= '9') printf("This letter is a Digit.\n");
    else                           printf("This letter is a Special Symbol.\n");
    return 0;
}
