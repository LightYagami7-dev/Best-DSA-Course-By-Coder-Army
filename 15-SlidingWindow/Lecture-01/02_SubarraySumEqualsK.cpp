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

// Q2. Subarray Sum Equals K
int subarraySum(vector<int> &arr, int k)
{
    unordered_map<int, int> m;
    m[0] = 1;
    int prefixSum = 0, total = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        prefixSum += arr[i];
        if (m.count(prefixSum - k))
        {
            total += m[prefixSum - k];
            m[prefixSum]++;
        }
        else
        {
            m[prefixSum]++;
        }
    }

    return total;
}

int main() {}
