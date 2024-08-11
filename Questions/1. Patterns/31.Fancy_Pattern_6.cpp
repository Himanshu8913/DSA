/*
    Fancy Pattern 6

    E 
    D E 
    C D E 
    B C D E 
    A B C D E
*/

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern31(int n) {
        for(int i = 0; i < n; i++) {
            char ch = 'A' + n - i - 1;
            for(int j = 0; j < i+1; j++) {
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    
    Solution sol;
    
    sol.pattern31(N);
    
    return 0;
}