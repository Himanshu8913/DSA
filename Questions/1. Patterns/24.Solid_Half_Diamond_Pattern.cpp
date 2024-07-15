/*
    Solid Half Diamond :-

    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    * 
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of cols : ";
    cin >> n;

    for(int row = 0; row < 2*n - 1; row++) {

        // int condition = 0;
        // if(row < n) {
        //     condition = row + 1;
        // }
        // else {
        //     condition = n - (row % n) -1;
        // }

        int condition = row < n ? row : n - (row % n) - 1;
        for(int col = 0; col < condition; col++) {
            cout << "*";
        }

        cout << endl;
    }
}
