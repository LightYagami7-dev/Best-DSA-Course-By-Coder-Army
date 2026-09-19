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

// Q4. Last Stone Weight.
int lastStoneWeight(vector<int> &stones)
{
    priority_queue<int> p;
    for (int i = 0; i < stones.size(); i++)
        p.push(stones[i]);

    while (p.size() > 1)
    {
        int first = p.top();
        p.pop();

        int second = p.top();
        p.pop();

        int destroy = abs(first - second);

        if (destroy != 0)
            p.push(destroy);
        else
        {
            if (p.empty())
                p.push(destroy);
        }
    }
    // return p.empty() ? 0 : p.top();
    return p.top();
}

int main()
{
    return 0;
}
