#include <iostream>
#include <cmath>
using namespace std;

// Calculates the hypotenuse of a right triangle: sqrt(a^2 + b^2)
int main()
{
    double x, y, z;
    cout << "Enter 1st number = ";
    cin >> x;
    cout << "Enter 2nd number = ";
    cin >> y;
    x = pow(x, 2);
    y = pow(y, 2);
    z = sqrt(x + y);
    cout << "The answer of the number is = " << z << endl;
    return 0;
}
