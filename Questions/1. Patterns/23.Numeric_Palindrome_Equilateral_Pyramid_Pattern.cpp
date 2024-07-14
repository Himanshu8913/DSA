/*
    Numeric Palindrome Equilateral Pyramid :-

            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for(int row = 0; row < n; row++) {
        // space
        for(int col = 0; col < n-row-1; col++) {
            cout <<" ";
        }
        // 1st Numeric
        for(int col = 0; col < row+1; col++) {
            cout << col+1;
        }
        // 2nd Numeric
        int second = row;
        for(int col= 0; col < row; col++) {
            cout << second;
            second--;
        }
        cout << endl;
    }
    return 0;
}