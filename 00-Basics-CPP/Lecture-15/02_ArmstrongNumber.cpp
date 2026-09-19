#include <iostream>
#include <cmath>
using namespace std;

// Q2. Armstrong Number
int pow(int base, int exponent)
{
    int ans = 1;
    for (int i = 1; i <= exponent; i++)
    {
        ans = ans * base;
    }

    return ans;
}

int armstrong(int num)
{
    int m = num;
    int n = num;
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }

    int ans = 0;

    while (num != 0)
    {
        int rem = num % 10;
        ans = ans + pow(rem, count);
        num /= 10;
    }

    if (m == ans)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    return 0;
}
