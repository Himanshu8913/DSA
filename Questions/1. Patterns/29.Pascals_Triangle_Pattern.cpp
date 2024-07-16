/*
    Pascal's Triangle Pattern :-

    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
    1 5 10 10 5 1
    1 6 15 20 15 6 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    int count = 1;

    // we can solve this with the help of binomial coefficient formula 
    for(int row = 1; row <= n; row++) {
        int count = 1;
        for(int col = 1; col <= row; col++) {
            cout << count << " ";
            count = count * (row - col) / col;
        }
        cout << endl;
    }
    return 0;
}