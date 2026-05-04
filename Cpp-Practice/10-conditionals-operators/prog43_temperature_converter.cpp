#include <iostream>
using namespace std;

int main()
{
    double x;
    char unit;
    cout << "                Welcome to the temperature conversion calculator!!" << endl;
    cout << "F = Fahrenheit   C = Celsius." << endl;
    cout << "What unit would you like to convert to: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << "Enter the temperature in Celsius: ";
        cin >> x;
        x = (1.8 * x) + 32;
        cout << "The temperature is: " << x << "F" << endl;
    } else if (unit == 'C' || unit == 'c') {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> x;
        x = (x - 32) / 1.8;
        cout << "The temperature is: " << x << "C" << endl;
    } else {
        cout << "Invalid Choice! Please enter only C or F." << endl;
    }

    return 0;
}
