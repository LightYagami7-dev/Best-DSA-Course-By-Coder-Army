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

// Q1. Shortest path in Undirected Graph.
vector<int> shortestPath(vector<vector<int>> &edges, int N, int M, int src)
{
    // code here
    // Adjacency List
    vector<int> adj[N];
    for (int i = 0; i < M; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    // Distance Array
    vector<int> dist(N, -1);
    vector<bool> visited(N, 0);
    queue<int> q;
    q.push(src);

    dist[src] = 0;
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
                dist[adj[node][i]] = dist[node] + 1;
            }
        }
    }

    return dist;
}

int main()
{
    return 0;
}
