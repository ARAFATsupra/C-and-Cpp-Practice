// Print a staircase star pattern
#include <stdio.h>

int main()
{
    printf("\t\t\tWelcome to the Dragon Warrior Program!!\n\n");
    int x, y;
    for (x = 1; x <= 20; x++) {
        for (y = 1; y <= x; y++) printf(" *");
        printf("\n");
    }
    return 0;
}
