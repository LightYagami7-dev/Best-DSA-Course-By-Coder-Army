#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

// Q1. Divide array in 2 subarray with equal sum.
bool divide(vector<int> arr)
{
    int prefix = 0, total_sum = 0, n = arr.size();

    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        prefix += arr[i];
        // int ans = total_sum - prefix;
        if (total_sum == 2 * prefix)
            return 1;
    }

    return 0;
}

int main()
{
    return 0;
}
