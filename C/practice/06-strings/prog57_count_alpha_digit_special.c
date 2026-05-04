// Count alphabets, digits, and special characters in a string
#include <stdio.h>

int main()
{
    char name[20];
    scanf("%s", name);
    int i = 0, a = 0, d = 0, s = 0;
    while (name[i] != '\0') {
        if      ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z')) a++;
        else if  (name[i] >= '0' && name[i] <= '9') d++;
        else s++;
        i++;
    }
    printf("Alphabets = %d\n",          a);
    printf("Digits = %d\n",             d);
    printf("Special characters = %d\n", s);
    return 0;
}
