#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your first letter is " << name.at(0) << endl;
    return 0;
}
