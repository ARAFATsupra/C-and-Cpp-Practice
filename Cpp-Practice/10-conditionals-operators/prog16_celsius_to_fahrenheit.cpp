#include <iostream>
using namespace std;

int main()
{
    double celsius;
    cout << "Enter Celsius Scale temperature value = ";
    cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5) + 32;
    cout << "The Fahrenheit Scale temperature value is = " << fahrenheit << endl;
    return 0;
}
