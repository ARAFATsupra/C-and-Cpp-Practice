#include <iostream>
using namespace std;

int main()
{
    int x = 112, y = x++, z = y++;
    cout << "X= " << x << ", Y= " << y << ", Z= " << z << endl;
    return 0;
}
