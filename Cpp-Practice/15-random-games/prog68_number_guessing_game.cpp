#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int num, guess, tries = 0;
    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "                   **** Welcome to the Number Guessing Game ****" << endl;
    do {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;
        if      (guess > num) cout << "Too High!" << endl;
        else if (guess < num) cout << "Too Low!"  << endl;
        else cout << "Correct! Number of tries: " << tries << endl;
    } while (guess != num);

    cout << "*******************************************************" << endl;
    return 0;
}
