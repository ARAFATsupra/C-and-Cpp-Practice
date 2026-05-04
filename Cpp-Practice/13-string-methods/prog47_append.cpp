#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    name.append("@gmail.com");
    cout << "Your username is now " << name << endl;
    return 0;
}
