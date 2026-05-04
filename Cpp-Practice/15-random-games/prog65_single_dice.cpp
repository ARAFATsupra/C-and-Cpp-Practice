#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int x = (rand() % 6) + 1;
    cout << "The dice number is = " << x << endl;
    return 0;
}
