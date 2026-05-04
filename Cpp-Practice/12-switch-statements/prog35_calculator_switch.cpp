#include <iostream>
using namespace std;

int main()
{
    char op;
    double x, y, z;
    cout << "                           Welcome to the Calculator!!" << endl;
    cout << "Enter 1st number = "; cin >> x;
    cout << "Enter 2nd number = "; cin >> y;
    cout << "Enter either (+, -, *, /): "; cin >> op;

    switch (op) {
        case '+': z = x + y; cout << "The result is = " << z << endl; break;
        case '-': z = x - y; cout << "The result is = " << z << endl; break;
        case '*': z = x * y; cout << "The result is = " << z << endl; break;
        case '/': z = x / y; cout << "The result is = " << z << endl; break;
        default:  cout << "Wrong Input. Invalid choice!" << endl;
    }
    return 0;
}
