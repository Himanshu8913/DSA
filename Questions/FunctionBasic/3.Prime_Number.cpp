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

    bool isPrime = checkPrime(n);
    if(isPrime) 
        cout <<n<<" is prime number";
    else 
        cout <<n<<" is not prime number";

    return 0;
}