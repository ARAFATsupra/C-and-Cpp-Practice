#include <stdio.h>
#include <string.h>

void calculateBowlingFigures(const char *balls) {
    int overs = 0, ballsBowled = 0, runs = 0, wickets = 0;

    for (int i = 0; balls[i] != '\0'; i++) {
        ballsBowled++;
        if (balls[i] == 'W') {
            wickets++;
        } else {
            runs += balls[i] - '0';
        }

        if (ballsBowled % 6 == 0) {
            overs++;
        }
    }

    printf("%d.%d over%s %d run%s %d wicket%s\n", overs, ballsBowled % 6, overs > 1 ? "s" : "", runs, runs > 1 ? "s" : "", wickets, wickets > 1 ? "s" : "");
}

int main() {
    int T;
    char balls[61];

    scanf("%d", &T);

    while (T--) {
        scanf("%s", balls);
        calculateBowlingFigures(balls);
    }

    return 0;
}
