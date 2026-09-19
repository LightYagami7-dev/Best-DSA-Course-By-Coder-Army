#include <iostream>
using namespace std;

// Q6. Given two numbers n, r. Find nCr (Combination). Use Function here.
int fact(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }

    return ans;
}

int comb(int n, int r)
{
    int ans = (fact(n)) / (fact(n - r) * fact(r));
    return ans;
}

int main()
{
    cout << reverse(234);
    cout << reverse(-234);

    cout << comb(5, 2);
}
