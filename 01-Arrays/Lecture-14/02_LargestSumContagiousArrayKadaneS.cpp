#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

// Q2. Largest Sum Contagious Array (Kadane's Algo).
long long maxSubarraySum(int arr[], int n)
{

    // Your code here
    long long maxi = INT_MIN, prefix = 0;
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if (prefix < 0)
            prefix = 0;
    }

    return maxi;
}

int main()
{
    return 0;
}
