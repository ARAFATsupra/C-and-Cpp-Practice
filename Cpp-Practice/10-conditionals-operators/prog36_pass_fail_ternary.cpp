#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter your grade number: ";
    cin >> x;
    x >= 40 ? cout << "You Passed!!" << endl : cout << "You Failed!!" << endl;
    return 0;
}
