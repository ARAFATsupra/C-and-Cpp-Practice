#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    if (name.length() > 12) cout << "Your name can't be over 12 characters!" << endl;
    else                     cout << "Welcome " << name << endl;
    return 0;
}
