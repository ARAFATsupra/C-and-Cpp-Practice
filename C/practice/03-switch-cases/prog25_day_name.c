// Print day name using switch
#include <stdio.h>

int main()
{
    int Day;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter number of the day (1-7): ");
    scanf("%d", &Day);
    switch (Day) {
        case 1: printf("Sunday.\n");    break;
        case 2: printf("Monday.\n");    break;
        case 3: printf("Tuesday.\n");   break;
        case 4: printf("Wednesday.\n"); break;
        case 5: printf("Thursday.\n");  break;
        case 6: printf("Friday.\n");    break;
        case 7: printf("Saturday.\n");  break;
        default: printf("Invalid Input!!\n");
    }
    return 0;
}
