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

// Q1. Length of Longest Subarray With at Most K Frequency.
int maxSubarrayLength(vector<int> &nums, int k)
{
    unordered_map<int, int> count;
    int start = 0, end = 0, len = 0;
    while (end < nums.size())
    {
        count[nums[end]]++;
        while (count[nums[end]] > k)
        {
            count[nums[start++]]--;
        }

        len = max(len, end - start + 1);
        end++;
    }
    return len;
}

int main()
{
    return 0;
}
