#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    name.erase(0, 3);
    cout << "Your name after erasing first 3 chars = " << name << endl;
    return 0;
}
