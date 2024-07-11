/*
    Hollow Half Pyramid :-
    *
    * *
    *   *
    *     *
    *       *
    ***********
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < 2 * row + 1; col++) {
            if(col == 0 || col == 2 * row || row == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}