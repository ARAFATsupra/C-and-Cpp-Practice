// Print month name and number of days using switch
#include <stdio.h>

int main()
{
    int Month;
    printf("\t\t\tWelcome to the C Program!!\n\n");
    printf("Enter the month number (1-12): ");
    scanf("%d", &Month);
    switch (Month) {
        case 1:  printf("January has 31 days.\n");             break;
        case 2:  printf("February has 28 days.\n");            break;
        case 3:  printf("March has 31 days.\n");               break;
        case 4:  printf("April has 30 days.\n");               break;
        case 5:  printf("May has 31 days.\n");                 break;
        case 6:  printf("June has 30 days.\n");                break;
        case 7:  printf("July has 31 days.\n");                break;
        case 8:  printf("August has 31 days.\n");              break;
        case 9:  printf("September has 30 days.\n");           break;
        case 10: printf("October has 31 days.\n");             break;
        case 11: printf("November has 30 days.\n");            break;
        case 12: printf("December has 31 days.\n");            break;
        default: printf("Invalid Input!!\n");
    }
    return 0;
}
