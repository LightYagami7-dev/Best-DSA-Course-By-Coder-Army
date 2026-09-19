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

// Q2. DFS of graph.
// Method 1: By using recursion.
void DFS(int node, vector<int> adj[], vector<bool> &visited, vector<int> &ans)
{
    visited[node] = 1;
    ans.push_back(node);

    for (int j = 0; j < adj[node].size(); j++)
    {
        if (!visited[adj[node][j]])
        {
            DFS(adj[node][j], adj, visited, ans);
        }
    }
}

// Function to return a list containing the DFS traversal of the graph.
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<bool> visited(V, 0);
    vector<int> ans;
    DFS(0, adj, visited, ans);
    return ans;
}

// Method 2: By using Stack.
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<bool> visited(V, 0);
    vector<int> ans;
    stack<int> s;
    s.push(0);

    int node;
    while (!s.empty())
    {
        node = s.top();
        s.pop();
        if (!visited[node])
        {
            visited[node] = 1;
            ans.push_back(node);
            for (int i = adj[node].size() - 1; i >= 0; i--)
            {
                s.push(adj[node][i]);
            }
        }
    }
    return ans;
}


int main() {}
