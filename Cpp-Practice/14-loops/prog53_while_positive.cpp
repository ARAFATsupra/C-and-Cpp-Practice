#include <iostream>
using namespace std;

int main()
{
    double x;
    cout << "Enter a positive number = ";
    cin >> x;
    while (x < 0) {
        cout << "Enter a positive number = ";
        cin >> x;
    }
    cout << "The number is = " << x << endl;
    return 0;
}
