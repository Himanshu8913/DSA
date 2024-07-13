/*
    Numeric Hollow Pyramid :-

            1
           1 2
          1   3
         1     4
        1 2 3 4 5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for(int row = 0; row < n; row++) {
        //space
        for(int col =0; col < n - row - 1; col++) {
            cout << " ";
        }

        //Numeric
        int count = 2;
        int start = 1;

        for(int col = 0; col < 2 * row + 1; col++) {
            // First Approach
            // if(row == n - 1 && col >= 1) {
            //     if(col % 2 == 0) {
            //         cout << count;
            //         count++;
            //     }
            //     else {
            //         cout << " ";
            //     }
            // }
            // else if (col == 0) {
            //     cout << col + 1;
            // }
            // else if (col == 2 * row)
            //     cout << row + 1;
            // else
            //     cout << " ";

            // Second Approach
            if(row == 0 || row == n-1) {
                if(col % 2 == 0) {
                    cout << start;
                    start++;
                }
                else {
                    cout << " ";
                }
            }
            else {
                // first col
                if(col == 0) {
                    cout << 1;
                }
                else if (col == 2 * row) {
                    cout << row+1;
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}