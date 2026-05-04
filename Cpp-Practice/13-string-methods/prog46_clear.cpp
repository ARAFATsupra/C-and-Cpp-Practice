#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    name.clear();
    cout << "Welcome " << name << endl;
    return 0;
}
