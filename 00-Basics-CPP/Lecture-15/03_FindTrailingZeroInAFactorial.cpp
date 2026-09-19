#include <iostream>
#include <cmath>
using namespace std;

// Q3. Find trailing zero in a factorial
int fact(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }

    return ans;
}

// This solution is only valid upto 14.
int find(int n)
{
    int f = fact(n);
    int count = 0;
    while (f)
    {
        int rem = f % 10;
        if (rem == 0)
        {
            count++;
        }
        else
        {
            break;
        }
        f /= 10;
    }
    return count;
}

// This solution is valid to any number.
int find2(int n)
{
    int count = 0;
    while (n >= 5)
    {
        int div = n / 5;
        count = count + floor(div);
        n /= 5;
    }

    return count;
}

int main()
{
    return 0;
}
