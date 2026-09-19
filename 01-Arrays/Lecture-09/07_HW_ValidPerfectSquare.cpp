#include <iostream>
#include <vector>
using namespace std;

// Q3.Valid Perfect Square.
bool isPerfectSquare(int num)
{
    if (num == 1)
        return 1;
    int start = 1, end = num, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == num / mid)
        {
            if (mid * mid == num)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (mid > num / mid)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return 0;
}



int main()
{
    cout << isPerfectSquare(5);
}
