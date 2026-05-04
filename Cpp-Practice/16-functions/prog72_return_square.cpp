#include <iostream>
using namespace std;

double square(double length);

int main()
{
    double length = 6.0;
    double area = square(length);
    cout << "The Area is = " << area << "cm^2" << endl;
    return 0;
}

double square(double length) { return length * length; }
