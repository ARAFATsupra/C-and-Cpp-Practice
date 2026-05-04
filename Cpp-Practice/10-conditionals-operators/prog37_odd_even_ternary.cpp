#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    x % 2 ? cout << "ODD" << endl : cout << "EVEN" << endl;
    return 0;
}
