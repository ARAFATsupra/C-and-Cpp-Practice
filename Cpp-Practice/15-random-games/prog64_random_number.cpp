#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int x = rand();
    cout << "The random number is = " << x << endl;
    return 0;
}
