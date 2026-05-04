#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter your age = ";
    cin >> x;
    if      (x >= 18) cout << "Welcome to the program!" << endl;
    else if (x <= 0)  cout << "You haven't been born yet!" << endl;
    else              cout << "You are not eligible." << endl;
    return 0;
}
