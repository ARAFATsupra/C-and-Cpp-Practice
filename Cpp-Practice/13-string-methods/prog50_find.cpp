#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Position of 'A' is = " << name.find('A') << endl;
    return 0;
}
