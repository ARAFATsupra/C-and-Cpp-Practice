#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks of the student = ";
    cin >> marks;

    if      (marks >= 90) cout << "The result is = Grade A"  << endl;
    else if (marks >= 80) cout << "The result is = Grade A-" << endl;
    else if (marks >= 70) cout << "The result is = Grade B"  << endl;
    else if (marks >= 60) cout << "The result is = Grade B-" << endl;
    else if (marks >= 50) cout << "The result is = Grade P"  << endl;
    else                  cout << "The result is = Grade F"  << endl;

    return 0;
}
