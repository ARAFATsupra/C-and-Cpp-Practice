// Check if a number is a palindrome
#include <stdio.h>

int main()
{
    int x, RealNum, ReverseNum = 0, Remainder;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter a number: ");
    scanf("%d", &x);
    RealNum = x;
    for (; x > 0; x /= 10) {
        Remainder   = x % 10;
        ReverseNum  = ReverseNum * 10 + Remainder;
    }
    if (RealNum == ReverseNum) printf("%d is a Palindrome.\n",     RealNum);
    else                       printf("%d is not a Palindrome.\n", RealNum);
    return 0;
}
