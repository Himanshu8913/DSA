/*
    Alphabetic Palindrome Pyramid :-

    A
    ABA
    ABCBA
    ABCDCBA
    ABCDEDCBA
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for(int row = 0; row < n; row++) {
        int col;
        for(col = 0; col < row+1 ; col++) {
            int res = col + 1;
            char ch = res + 'A' - 1;
            cout<< ch;
        }
        // loops break because it goes beyond so we have to go 1 step back
        col = col - 1;

        // reverse counting 
        for(col = row; col >= 1; col--) {
            int res = col;
            char ch = res + 'A' - 1;
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}