#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

// Q2. Shortest path in an unweighted graph.
vector<int> shortestPath(vector<pair<int, int>> edges, int N, int M, int src,
                         int dest)
{

    // Write your code here
    vector<int> adj[N];
    for (int i = 0; i < M; i++)
    {
        adj[edges[i].first - 1].push_back(edges[i].second - 1);
        adj[edges[i].second - 1].push_back(edges[i].first - 1);
    }
    src--;
    dest--;

    // Distance Array
    vector<bool> visited(N, 0);
    vector<int> parent(N, -1);
    queue<int> q;
    q.push(src);

    visited[src] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int i = 0; i < adj[node].size(); i++)
        {
            if (!visited[adj[node][i]])
            {
                q.push(adj[node][i]);
                visited[adj[node][i]] = 1;
                parent[adj[node][i]] = node;
            }
        }
    }
    vector<int> path;
    while (dest != -1)
    {
        path.push_back(dest + 1);
        dest = parent[dest];
    }

    reverse(path.begin(), path.end());
    return path;
}

int main() {}
