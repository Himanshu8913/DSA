/*
    print prime numbers from 1 to n
*/

#include <iostream>
using namespace std;

bool checkPrime(int num) {

    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0)
            return false;
    }
    return true;;
}

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    // Number 1 is by default non prime so we are running this loop from i = 2.
    for(int i = 2; i <= n; i++) {
        bool isPrime = checkPrime(i);
        if(isPrime) {
            cout << i << endl;
        }
    }
    return 0;
}