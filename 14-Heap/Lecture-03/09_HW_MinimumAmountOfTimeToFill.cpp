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

// Q3. Minimum Amount of Time to Fill Cups.
int fillCups(vector<int> &amount)
{
    priority_queue<int> p;
    for (auto x : amount)
    {
        if (x)
            p.push(x);
    }
    int ans = 0;
    while (p.size() > 1)
    {
        int a = p.top();
        p.pop();
        int b = p.top();
        p.pop();

        if (a > 1)
            p.push(a - 1);
        if (b > 1)
            p.push(b - 1);

        ans++;
    }
    return p.empty() ? ans : ans + p.top();
}

int main() {}
