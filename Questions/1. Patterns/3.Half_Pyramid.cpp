/*
    Half Pyramid
    *
    **
    ***
    ****
    *****
*/

#include <iostream>
using namespace std;

// int main() {
//     for(int row = 0; row < 5; row++) {
//         for(int col = 0; col < 5; col++) {
//             if(row == col || row > col ) {
//                 cout << "*";
//             }
//             else {
//                 cout <<" ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < row+1; col++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}