#include <iostream>
using namespace std;

// Q2. Reverse a number n using Function, Constraints: -5000<=n<=5000
int reverse(int n)
{
    int ans = 0;
    while (n != 0)
    {
        int rem = n % 10;
        ans = ans * 10 + rem;
        n /= 10;
    }

    return ans;
}

int main()
{
    return 0;
}
