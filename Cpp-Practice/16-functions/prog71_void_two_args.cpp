#include <iostream>
#include <string>
using namespace std;

void happyBirthday(string name, int age);

int main()
{
    string name = "MASTER KING!!";
    int age = 25;
    happyBirthday(name, age);
    return 0;
}

void happyBirthday(string name, int age) {
    cout << "Happy Birthday to " << name << endl;
    cout << "Happy Birthday to " << name << endl;
    cout << "Happy Birthday to " << name << endl;
    cout << "You are " << age << " years old now!" << endl;
}
