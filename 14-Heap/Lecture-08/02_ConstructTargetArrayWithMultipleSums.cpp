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

// Q2. Construct Target Array With Multiple Sums.
bool isPossible(vector<int> &target)
{
    // maxheap
    priority_queue<long long> p;
    long long sum = 0;

    for (int i = 0; i < target.size(); i++)
    {
        p.push(target[i]);
        sum += target[i];
    }

    long long maxEle, remSum, element;
    while (p.top() != 1)
    {
        maxEle = p.top();
        p.pop();
        remSum = sum - maxEle;

        // Edge Cases
        if (remSum <= 0 || remSum >= maxEle)
            return 0;

        element = maxEle % remSum;
        if (element == 0)
        {
            if (remSum != 1)
                return 0;
            else
                return 1;
        }
        sum = remSum + element;
        p.push(element);
    }
    return 1;
}

int main() {}
