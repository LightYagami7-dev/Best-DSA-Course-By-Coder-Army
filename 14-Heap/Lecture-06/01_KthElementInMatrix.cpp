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

#define MAX 1000

// Q1. Kth element in Matrix.
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    // Your code here
    vector<pair<int, pair<int, int>>> temp;
    for (int i = 0; i < n; i++)
    {
        temp.push_back(make_pair(mat[i][0], make_pair(i, 0)));
    }
    // create min heap
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> p(temp.begin(), temp.end());

    int ans;
    pair<int, pair<int, int>> element;

    int i, j;

    while (k--)
    {
        element = p.top();
        p.pop();
        ans = element.first;
        i = element.second.first;
        j = element.second.second;

        if (j + 1 < n)
            p.push(make_pair(mat[i][j + 1], make_pair(i, j + 1)));
    }

    return ans;
}

int main()
{
    return 0;
}
