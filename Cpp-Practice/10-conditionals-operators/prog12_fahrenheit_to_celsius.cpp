#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Fahrenheit Scale temperature = ";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << "The temperature of Celsius Scale is = " << celsius << endl;
    return 0;
}
