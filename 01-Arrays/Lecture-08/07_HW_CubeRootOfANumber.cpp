#include <iostream>
using namespace std;

// Q3. Cube root of a number.
int cubeRoot(int N)
{
    // code here
    int start = 1, end = N, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == N / (mid * mid))
        {
            return mid;
        }
        else if (mid > N / (mid * mid))
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return start - 1;
}

int main() {}
