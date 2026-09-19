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

// Q3. Magician and Chocolates.
int nchoc(int A, vector<int> &B)
{
    // max heap
    priority_queue<int> p;
    for (int i = 0; i < B.size(); i++)
        p.push(B[i]);

    long long ans = 0;
    while (A && (!p.empty()))
    {
        ans += p.top();

        if (p.top() / 2)
        {
            p.push(p.top() / 2);
        }
        p.pop();
        A--;
    }
    return ans % 1000000007;
}

int main()
{
    return 0;
}
