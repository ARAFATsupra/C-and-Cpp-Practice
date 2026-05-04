#include <iostream>

using namespace std;

int main(){
    double x,y;
    cout << "                      WELCOME TO POWERS MATCHING CALCULATOR" << endl;
    cout << "This program can decide 2 persons spirits or powers are equally matched or not." << endl;
    cout << " " << endl;
    cout << "Enter Two person's SGPA results = ";
    cin >> x >> y;

    if (x == y){cout << "This 2 persons are equally matched & can get even stronger if their powers are  in a fusion.";}
    else if (x < y) {cout << "This 2 person's have not the same power nor the spirit.";}
    else {cout << "This 2 persons are not equally matched.";}
    cout << "" << endl;
    return 0;
}
