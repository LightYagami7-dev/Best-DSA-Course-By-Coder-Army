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

// Q2. Relative Ranks.
vector<string> findRelativeRanks(vector<int> &score)
{
    priority_queue<pair<int, int>> p;
    pair<int, int> pairs;
    int n = score.size();
    vector<string> ans(n);

    for (int i = 0; i < n; i++)
    {
        p.push(make_pair(score[i], i));
    }

    int count = 1;

    while (!p.empty())
    {
        if (count == 1)
        {
            pairs = p.top();
            p.pop();

            ans[pairs.second] = "Gold Medal";
            count++;
        }
        else if (count == 2)
        {
            pairs = p.top();
            p.pop();

            ans[pairs.second] = "Silver Medal";
            count++;
        }
        else if (count == 3)
        {
            pairs = p.top();
            p.pop();

            ans[pairs.second] = "Bronze Medal";
            count++;
        }
        else
        {
            pairs = p.top();
            p.pop();

            ans[pairs.second] = to_string(count);
            count++;
        }
    }
    return ans;
}

int main()
{
    return 0;
}
