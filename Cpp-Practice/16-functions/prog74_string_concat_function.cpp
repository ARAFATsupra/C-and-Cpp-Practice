#include <iostream>
#include <string>
using namespace std;

string concatStrings(string s1, string s2);

int main()
{
    string firstName = "Arafat";
    string lastName  = "Sakib!";
    string fullName  = concatStrings(firstName, lastName);
    cout << "Hello! " << fullName << endl;
    return 0;
}

string concatStrings(string s1, string s2) { return s1 + " " + s2; }
