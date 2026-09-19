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

// Q2. Subarray Product Less Than K.
int numSubarrayProductLessThanK(vector<int> &nums, int k)
{
    int product = 1, start = 0, end = 0, n = nums.size(), count = 0;

    while (end < n)
    {
        product *= nums[end];
        while (product >= k && start <= end)
        {
            product /= nums[start++];
        }

        count += end - start + 1;
        end++;
    }

    return count;
}

int main() {}
