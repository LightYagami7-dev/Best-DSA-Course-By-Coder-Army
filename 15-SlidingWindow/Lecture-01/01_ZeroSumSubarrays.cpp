#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <climits>
using namespace std;

// Q1. Zero Sum Subarrays.
long long int findSubarray(vector<long long int> &arr, int n)
{
    // code here
    long long int total = 0;

    unordered_map<long long int, long long int> m;
    long long int prefixSum = 0;

    m[0] = 1;
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (m.count(prefixSum))
        {
            total += m[prefixSum];
            m[prefixSum]++;
        }
        else
        {
            m[prefixSum] = 1;
        }
    }

    return total;
}

int main()
{
    return 0;
}
