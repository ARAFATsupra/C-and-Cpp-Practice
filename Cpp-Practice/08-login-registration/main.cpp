#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name1,name2,name3,name4;
    cout << "                    Welcome to the Login & Regitration program!" << endl;
    cout << "Enter New Username: ";
    getline (cin, name1);
    cout << "Enter New Password: ";
    getline (cin, name2);
    cout << "Registration Successful." << endl;
    cout << "Now Log In into your account." <<endl;
    cout << "Enter Username: ";
    getline (cin, name3);
    if (name1 == name3) {cout << "Username is correct. Press enter to enter your password." << endl;}
    else {cout << "Username is incorrect. Log in process failed!!" << endl;}
    cout << "Enter Password: ";
    getline (cin, name4);
    if (name2 == name4) {cout << "Password is correct. Log In successful!!" << endl;}
    else {cout << "Password is incorrect. Log in process failed!!" << endl;}
    return 0;
}
