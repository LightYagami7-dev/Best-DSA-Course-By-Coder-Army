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

// Q1. Make Array Zero by Subtracting Equal Amounts
int minimumOperations(vector<int> &nums)
{
    set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
            s.insert(nums[i]);
    }

    return s.size();
}

int main()
{
    return 0;
}
