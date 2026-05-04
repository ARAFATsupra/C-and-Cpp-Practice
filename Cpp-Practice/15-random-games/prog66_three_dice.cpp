#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int x = (rand() % 6) + 1;
    int y = (rand() % 6) + 1;
    int z = (rand() % 6) + 1;
    cout << "The 3 dice numbers are = " << x << ", " << y << ", " << z << endl;
    return 0;
}
