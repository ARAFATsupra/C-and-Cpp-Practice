#include <iostream>
using namespace std;

int main()
{
    double x, y, z;
    cout << "Enter 3 numbers = ";
    cin >> x >> y >> z;
    cout << "The max number is = " << max({x, y, z}) << endl;
    return 0;
}
