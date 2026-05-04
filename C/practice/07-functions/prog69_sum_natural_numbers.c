// Sum of the first N natural numbers using a function
// ARAFAT-0242320005191008
#include <stdio.h>

int sum(int num);

int main()
{
    int num = 20;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    int Add = sum(num);
    printf("Sum of first %d natural numbers: %d\n", num, Add);
    return 0;
}

int sum(int num) {
    int i, Add = 0;
    for (i = 1; i <= num; i++) Add += i;
    return Add;
}
