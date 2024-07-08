/*
    Hollow Rectangle Pattern:-

    *****
    *   *
    *****
*/

#include <iostream>
using namespace std;

int main() {
    int rowCount, colCount;
    cout << "Enter number of rows : ";
    cin >> rowCount;
    cout << "Enter number of cols : ";
    cin >> colCount;


    // for(int row= 0; row < rowCount; row++)
    // {
    //     if(row == 0 || row == rowCount - 1) {
    //         for(int col = 0; col < colCount; col++) {
    //             cout << "*";
    //         }
    //     }
    //     else {
    //         cout << "*";
    //         for(int col = 0; col < colCount-2; col++) {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;

    // }

    for(int row = 0; row < rowCount; row++) {
        for (int col = 0; col < colCount; col++)
        {
            if(row == 0 || row == rowCount-1 || col == 0 || col == colCount-1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}