#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp = a;
    a = b;
    b = temp;
    cout << "The swapped value of 1st number is= " << a << endl;
    cout << "The swapped value of 2nd number is= " << b << endl;
    return 0;
}
