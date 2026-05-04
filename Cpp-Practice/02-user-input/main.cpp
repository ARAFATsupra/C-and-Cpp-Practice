#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "What's your age?? : ";
    cin >> age;
    cout << "What's your full name? : ";
    cin >> name;

    cout << "Hello! " << name << endl;
    cout << "You are " << age << "years old." << endl;
    return 0;
}
