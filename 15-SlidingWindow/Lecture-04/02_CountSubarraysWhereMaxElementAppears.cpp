#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <climits>
using namespace std;

// Q2. Count Subarrays Where Max Element Appears at Least K Times.
long long countSubarrays(vector<int> &nums, int k)
{
    int start = 0, end = 0, maxEle = INT_MIN, count = 0;
    long long total = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        maxEle = max(maxEle, nums[i]);
    }

    while (end < nums.size())
    {
        if (nums[end] == maxEle)
            count++;

        while (count == k)
        {
            total += nums.size() - end;
            if (nums[start] == maxEle)
                count--;
            start++;
        }
        end++;
    }
    return total;
}

int main()
{
    return 0;
}
