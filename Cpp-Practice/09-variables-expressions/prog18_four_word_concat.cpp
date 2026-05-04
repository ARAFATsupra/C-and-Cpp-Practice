#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1, name2, name3, name4;
    cout << "Enter 4 words: ";
    cin >> name1 >> name2 >> name3 >> name4;
    cout << "The combination of 4 words is: " << name1 + name2 + name3 + name4 << endl;
    return 0;
}
