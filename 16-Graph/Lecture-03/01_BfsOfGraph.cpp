#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <climits>
using namespace std;

// Q1. BFS of graph.
vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    queue<int> q;
    q.push(0);
    vector<bool> visited(V, 0);
    visited[0] = 1;

    vector<int> ans;
    int node;

    while (!q.empty())
    {
        node = q.front();
        q.pop();
        ans.push_back(node);
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (!visited[adj[node][i]])
            {
                visited[adj[node][i]] = 1;
                q.push(adj[node][i]);
            }
        }
    }

    return ans;
}

int main()
{
    return 0;
}
