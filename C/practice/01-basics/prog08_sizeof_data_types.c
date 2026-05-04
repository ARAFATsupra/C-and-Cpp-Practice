// Display the size of each data type
#include <stdio.h>

int main()
{
    int x;    float y;    double z;    char a;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("int    = %d bytes\n",   (int)sizeof(x));
    printf("float  = %d bytes\n",   (int)sizeof(y));
    printf("double = %d bytes\n",   (int)sizeof(z));
    printf("char   = %d bytes\n",   (int)sizeof(a));
    return 0;
}
