#include <iostream>
using namespace std;

long long int findFactorial(long long int num) {
    long long int result = 1;
    for(int i = 1; i <= num; i++) {
        result *= i; 
    }
    return result;
}

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    long long int factorial = findFactorial(n);
    cout << "Factorial of "<<n << " is : " <<factorial;

    return 0;
}