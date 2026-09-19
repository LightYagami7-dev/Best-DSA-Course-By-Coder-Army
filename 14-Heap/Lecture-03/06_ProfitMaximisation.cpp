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

// Q6. Profit Maximisation.
int solve(vector<int> &A, int B)
{
    int sum = 0;
    priority_queue<int> p;

    for (int i = 0; i < A.size(); i++)
        p.push(A[i]);

    while (B && !(p.empty()))
    {
        sum += p.top();

        if (p.top() - 1)
            p.push(p.top() - 1);
        p.pop();

        B--;
    }
    return sum;
}

int main() {}
