#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    if (x>100){
      if (x<200) {cout <<"If if is working.";}
      else {cout <<"If else is working.";}
    }
    else {
      if (x<99) {cout <<"Else if is working.";}
      else {cout <<"Else else is working";}
    }
    return 0;
}
