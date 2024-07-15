/*
    Fancy Pattern 4 :-

    1
    2*3
    4*5*6
    7*8*9*10
    7*8*9*10
    4*5*6
    2*3
    1


*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of cols : ";
    cin >> n; 
    int count = 1;

    for(int row = 0; row < n; row++) {
        for(int col = 0; col <= row; col++) {
            cout << count;
            count++;
            if(col < row) {
                cout << "*";
            }
        }
        cout << endl;
    }
    int start = count - n; // as value of count will be 11 so we have to reset it to 7. 
    for(int row = 0; row < n; row++) {
        int k = start;
        for(int col = 0; col < n - row ; col++) {
            cout << k;
            k++;
            if(col < n-row-1) {
                cout << "*";
            }
        }
        start = start - (n - row - 1);
        cout << endl;
    }
    return 0;
}