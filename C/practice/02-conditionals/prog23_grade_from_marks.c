// Compute student grade using if-else
#include <stdio.h>

int main()
{
    int Marks;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter the marks: ");
    scanf("%d", &Marks);
    if      (90 <= Marks && Marks <= 100) printf("Grade: A+\n");
    else if (80 <= Marks && Marks <  90)  printf("Grade: A\n");
    else if (70 <= Marks && Marks <  80)  printf("Grade: B+\n");
    else if (60 <= Marks && Marks <  70)  printf("Grade: B\n");
    else if (50 <= Marks && Marks <  60)  printf("Grade: C\n");
    else                                  printf("Grade: F\n");
    return 0;
}
