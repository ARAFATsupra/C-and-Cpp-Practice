#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the temperature: ";
    cin >> x;
    if (x > 0 && x < 30) cout << "The temperature is good!" << endl;
    else                  cout << "The temperature is bad!"  << endl;
    return 0;
}
