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

// Q5. Take Gifts From the Richest Pile.
long long pickGifts(vector<int> &gifts, int k)
{
    priority_queue<int> p(gifts.begin(), gifts.end());
    while (k--)
    {
        p.push(floor(sqrt(p.top())));
        p.pop();
    }

    long long sum = 0;
    while (!p.empty())
    {
        sum += p.top();
        p.pop();
    }

    return sum;
}

int main()
{
    return 0;
}
