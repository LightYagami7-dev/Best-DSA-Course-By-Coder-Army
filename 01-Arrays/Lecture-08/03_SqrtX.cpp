#include <iostream>
#include <vector>
using namespace std;

// Q3.Sqrt(x)
int mySqrt(int x)
{

    if (x < 2)
        return x;

    int start = 0, end = x, ans, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == x / mid)
        {
            return mid;
        }
        else if (mid < x / mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    return 0;
}
