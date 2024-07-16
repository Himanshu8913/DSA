/*
    Fancy Pattern 5 :-

    *
    * 1 *
    * 1 2 1 *
    * 1 2 3 2 1 *
    * 1 2 1 *
    * 1 *
    *

    * It look like a palindrome with "*" in beginning and end.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for (int row = 0; row <= n; row++) {

        if (row == 0) {
            cout << "*" << endl;
        }

        else {
            cout << "*";
            for (int col = 1; col <= row; col++) {
                cout << col;
            }
            for (int col = row - 1; col >= 1; col--) {
                cout << col;
            }
            cout << "*" << endl;
        }
    }

    for (int row = n - 1; row >= 0; row--) {

        if (row == 0) {
            cout << "*" << endl;
        }
        else {
            cout << "*";

            for (int col = 1; col <= row; col++) {
                cout << col;
            }
            for (int col = row - 1; col >= 1; col--) {
                cout << col;
            }
            cout << "*" << endl;
        }
    }

    return 0;
}