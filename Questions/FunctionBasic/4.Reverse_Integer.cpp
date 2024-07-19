#include <iostream>
using namespace std;

int reverse(int x)
{
    int result = 0;
    bool isNeg = false;
    if (x <= INT_MIN)
    {
        return 0;
    }
    if (x < 0)
    {
        isNeg = true;
        x = -x;
    }
    while (x > 0)
    {
        if (result > INT_MAX / 10)
        {
            return 0;
        }
        int rem = x % 10;
        x = x / 10;
        result = result * 10 + rem;
    }
    return isNeg ? -result : result;
}

int main()
{

    int res = reverse(-123);
    cout << res;

    return 0;
}