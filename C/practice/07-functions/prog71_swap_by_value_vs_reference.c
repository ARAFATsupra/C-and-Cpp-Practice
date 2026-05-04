// Compare swap by value (does not work) vs swap by reference (works)
// ARAFAT-0242320005191008
#include <stdio.h>

void swap1(int a, int b);
void swap2(int *a, int *b);

int main()
{
    int x = 10, y = 20;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Before swap by value: x=%d, y=%d\n", x, y);
    swap1(x, y);
    printf("After  swap by value: x=%d, y=%d\n", x, y);
    printf("Before swap by reference: x=%d, y=%d\n", x, y);
    swap2(&x, &y);
    printf("After  swap by reference: x=%d, y=%d\n", x, y);
    return 0;
}

void swap1(int a, int b) {
    int temp = a; a = b; b = temp;
    printf("Inside swap by value: a=%d, b=%d\n", a, b);
}

void swap2(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
    printf("Inside swap by reference: a=%d, b=%d\n", *a, *b);
}
