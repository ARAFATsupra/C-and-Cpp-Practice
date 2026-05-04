#include <iostream>
using namespace std;

// Prints a grid of a chosen symbol with custom rows and columns
int main()
{
    int rows, columns;
    char symbol;
    cout << "How many rows?: ";    cin >> rows;
    cout << "How many columns?: "; cin >> columns;
    cout << "Enter a symbol to use: "; cin >> symbol;

    for (double x = 1; x <= rows; x++) {
        for (double y = 1; y <= columns; y++) {
            cout << symbol;
        }
        cout << endl;
    }
    return 0;
}
