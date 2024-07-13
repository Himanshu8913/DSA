/*

    Numeric Full Pyramid :-

            1
           232
          34543
         4567654
        567898765

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for(int row = 0; row < n; row++) {

        //space
        for(int col = 0; col < n-row-1; col++) {
            cout <<" ";
        }

        // 1st numeric
        int start = row + 1;
        for(int col = 0; col < row+1; col++) {
            cout << start;
            start++;
        }

        // 2nd numeric
        int second = 2 * row;
        for(int col= 0; col < row; col++) {
            cout << second;
            second--;
        }

        cout <<endl;
    }

    return 0;
 }