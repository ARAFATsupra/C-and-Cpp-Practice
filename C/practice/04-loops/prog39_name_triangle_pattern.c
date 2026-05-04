// Print a name in a centered triangle pattern
#include <stdio.h>

int main()
{
    printf("\t\t\tWelcome to the Dragon Warrior Program!!\n\n");
    int x, y, z = 10;
    for (x = 1; x <= 10; x++) {
        for (y = 0; y < 2 * (z - x) - 1; y++) printf("  ");
        for (y = 1; y <= x; y++) printf("  Arafat ");
        printf("\n");
    }
    return 0;
}
