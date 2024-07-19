#include <iostream>
using namespace std;

bool checkEvenOdd(int num) {
    // if(num % 2 == 0)
    if ((num & 1) == 0)
        return true;
    else 
        return false;
}

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    bool isEven = checkEvenOdd(n);
    if(isEven) 
        cout <<n<<" is even number";
    else 
        cout <<n<<" is odd number";

    return 0;
}