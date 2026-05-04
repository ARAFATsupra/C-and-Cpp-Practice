#include <iostream>
using namespace std;

// Stops at 14 using break
int main()
{
    for (double x = 0; x <= 20; x++) {
        if (x == 14) break;
        cout << x << endl;
    }
    cout << "Hello! Hi!" << endl;
    return 0;
}
