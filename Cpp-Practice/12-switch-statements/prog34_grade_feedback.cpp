#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "What letter grade did you get? Enter it: ";
    cin >> grade;
    switch (grade) {
        case 'A': cout << "You are Outstanding!" << endl; break;
        case 'B': cout << "You are Great!"       << endl; break;
        case 'C': cout << "You are Average!"     << endl; break;
        case 'D': cout << "You are Not Bad!"     << endl; break;
        case 'F': cout << "You Failed!"          << endl; break;
        default:  cout << "System Error! Wrong Input. Please Enter (A-F)." << endl;
    }
    return 0;
}
