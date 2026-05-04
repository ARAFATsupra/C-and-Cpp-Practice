#include <iostream>
#include <string>
using namespace std;
void bakePizza(){cout << "Here is your pizza!" << endl;}
void bakePizza(string topping1){cout << "Here is your " << topping1 << " pizza!" << endl;}
void bakePizza(string topping1, string topping2){cout << "Here is your " << topping1 << " & " << topping2 << " Pizza!" << endl;}
int main(){
    bakePizza("Vegetable", "Chicken");
    return 0; }

