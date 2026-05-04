#include <iostream>
using namespace std;

int main()
{
    double x;
    do {
        cout << "Enter a positive number = ";
        cin >> x;
    } while (x < 0);
    cout << "The number is = " << x << endl;
    return 0;
}
