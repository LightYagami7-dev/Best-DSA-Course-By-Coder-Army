#include <iostream>
#include <queue>
#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

// Q3. Number of Provinces.
void dfs(int node, vector<vector<int>> &adj, map<int, bool> &visited)
{

    visited[node] = 1;

    for (int nbr = 0; nbr < adj[node].size(); nbr++)
    {
        if (adj[node][nbr] == 1 && !visited[nbr])
        {
            dfs(nbr, adj, visited);
        }
    }
}
int numProvinces(vector<vector<int>> adj, int V)
{
    // code here
    map<int, bool> visited;
    int count = 0;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            count++;
            dfs(i, adj, visited);
        }
    }
    return count;
}

int main() {}
