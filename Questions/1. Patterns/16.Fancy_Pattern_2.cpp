/*
    Fancy Pattern 2 :-

    4444
    333
    22
    1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n - row; col++) {
            cout << n - row;
        }
        cout << endl;
    }
}