#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1 = "Kazi", name2 = " Arafat", name3 = " Hossain", name4 = " (Sakib)", name5 = " [ID: 008]", fullname = name1 + name2 + name3 + name4 + name5;
    cout << "The full name is: "<< fullname << endl;
    return 0;
}
