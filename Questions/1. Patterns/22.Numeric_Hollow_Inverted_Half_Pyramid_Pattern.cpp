/*
    Numeric Hollow Inverted Half Pyramid :-

    12345
    2  5
    3 5
    45
    5
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for(int row = 0; row < n; row++) {
        int start = row+1;
        for(int col = 0; col < n - row; col++) {
            // for 1st row and 1st col
            if(col == 0 || row == 0) {
                cout << start;
                start++;
            }
            else {
                if (col == n - row - 1) {
                    cout << n ;
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}
