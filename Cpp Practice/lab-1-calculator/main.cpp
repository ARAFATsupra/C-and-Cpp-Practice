#include <iostream>

using namespace std;

int main(){
    int x, y;
    char operation;

    cout << "Enter the values of x and y: ";
    cin >> x >> y;
    cout << "Enter the operation you want to perform (+ for addition, - for subtraction): ";
    cin >> operation;
    cout << endl;

    if (operation == '+'){ cout << "You chose to add two numbers." << endl;
    cout << "The addition result is: " << x + y << endl;}
    else if (operation == '-'){ cout << "You chose to subtract the second number from the first number." << endl;
    cout << "The subtraction result is: " << x - y << endl;}
    else {cout << "Invalid operation. Please enter + or -." << endl;}

    return 0;
}
