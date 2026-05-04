#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int x = (rand() % 5) + 1;
    switch (x) {
        case 1: cout << "You win a Bumper Sticker!"  << endl; break;
        case 2: cout << "You win a T-shirt!"         << endl; break;
        case 3: cout << "You win a Free Lunch!"      << endl; break;
        case 4: cout << "You win a Gift Card!"       << endl; break;
        case 5: cout << "You win Concert Tickets!"   << endl; break;
    }
    return 0;
}
