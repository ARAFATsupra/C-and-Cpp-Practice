#include <iostream>
using namespace std;

int main()
{
    int math, english, science;
    cout << "Enter the marks of Math = ";    cin >> math;
    cout << "Enter the marks of English = "; cin >> english;
    cout << "Enter the marks of Science = "; cin >> science;

    double average = (math + english + science) / 3.0;
    cout << "The average marks is = " << average << endl;

    if      (average >= 90) cout << "Grade A+" << endl;
    else if (average >= 80) cout << "Grade A"  << endl;
    else if (average >= 70) cout << "Grade B"  << endl;
    else if (average >= 60) cout << "Grade C"  << endl;
    else if (average >= 50) cout << "Grade D"  << endl;
    else                    cout << "Grade F"  << endl;

    return 0;
}
