/*
    Hollow Solid Diamond :-

      *  
     * *
    *   *
   *     *
  *       *
  *       *
   *     *
    *   *
     * *
      *
*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for(int row = 0; row < n; row++) {
        // print space
        for(int col = 0; col < n - row - 1; col++) {
            cout << " ";
        }
        // print * in 1st and last location
        for(int col = 0; col < 2 * row + 1; col++) {
            if(col == 0 || col == 2 * row)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < row ; col++) {
            cout << " ";
        }
        // print * in 1st and last location
        for(int col =0; col < 2*n - 2*row - 1; col++) {
            if(col == 0 || col == 2*n - 2*row -2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

}