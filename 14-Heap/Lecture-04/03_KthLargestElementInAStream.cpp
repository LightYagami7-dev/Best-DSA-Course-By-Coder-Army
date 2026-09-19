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

// Q3. Kth largest element in a stream.
// (Homework Question)
vector<int> kthLargest(int k, int arr[], int n)
{
    // code here
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> p;

    for (int i = 0; i < n; i++)
    {
        p.push(arr[i]);
        if (p.size() < k)
            ans.push_back(-1);
        else
        {
            if (p.size() > k)
                p.pop();
            ans.push_back(p.top());
        }
    }

    return ans;
}

int main()
{
    return 0;
}
