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

// Q1. Subarray Sums Divisible by K.
int subarraysDivByK(vector<int> &nums, int k)
{
    // Unordered Map
    unordered_map<int, int> m;
    m[0] = 1;

    int prefixSum = 0, rem, total = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        prefixSum += nums[i];
        rem = prefixSum % k;

        if (rem < 0)
            rem = k + rem;

        if (m.count(rem))
        {
            total += m[rem];
            m[rem]++;
        }
        else
        {
            m[rem] = 1;
        }
    }
    return total;
}

int main()
{
    return 0;
}
