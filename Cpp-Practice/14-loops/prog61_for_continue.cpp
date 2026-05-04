#include <iostream>
using namespace std;

// Skips 14 using continue
int main()
{
    for (double x = 0; x <= 20; x++) {
        if (x == 14) continue;
        cout << x << endl;
    }
    cout << "Hello! Hi!" << endl;
    return 0;
}
