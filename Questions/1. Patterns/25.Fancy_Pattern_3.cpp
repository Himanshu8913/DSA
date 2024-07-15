/*
    Fancy Pattern 3 :-

    ********1********
    *******2*2*******
    ******3*3*3******
    *****4*4*4*4*****
    ****5*5*5*5*5****
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of cols : ";
    cin >> n; 
    
    if(n > 9) {
        cout << "Warning!! Please put value less than or equal to 9";
        return 0;
    }
    //  value of row can go from 1 to 9
    for(int row = 0; row < n; row++) {
        int start_of_index = 8 - row;
        int num = row + 1;
        int count_num = num;
        for(int col = 0; col < 17; col++) {
            if(col == start_of_index && count_num > 0) {
                cout << num;
                start_of_index += 2;
                count_num--;
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}