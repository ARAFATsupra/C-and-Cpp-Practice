#include <iostream>
using namespace std;

double square(double length);
double cube(double length);

int main()
{
    double length = 6.0;
    double area   = square(length);
    double volume = cube(length);
    cout << "The Area is = "   << area   << "cm^2" << endl;
    cout << "The Volume is = " << volume << "cm^3" << endl;
    return 0;
}

double square(double length) { return length * length; }
double cube(double length)   { return length * length * length; }
