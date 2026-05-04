#include <iostream>

using namespace std;

int main(){
    double x,y;
    char operation;
    cout << "                       WELCOME TO THE ARAFAT'S CALCULATOR" << endl;
    cout << "Enter 2 values = ";
    cin >> x >> y;
    cout << "Enter the operation +,-,*,/: ";
    cin >>  operation;
    if (operation == '+' ){cout << "You chose to add these two values." << endl;
    cout << "The addition answer of these two values is = " << x+y << endl;}
    else if (operation == '-' ){cout << "You chose to subtract these two values." << endl;
    cout << "The subtraction answer of these two values is = " << x-y << endl;}
    else if (operation == '*' ){cout << "You chose to multiply these two values." << endl;
    cout << "The multiplication answer of these two values is = " << x*y << endl;}
    else if (operation == '/' ){cout << "You chose to divide these two values." << endl;
    cout << "The division answer of these two values is = " << x/y << endl;}
    else {cout << "Invalid operation. Please enter +,-,*,/. " << endl;}
    return 0;

}
