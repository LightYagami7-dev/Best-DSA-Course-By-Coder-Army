#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Q1. Prerequisite Tasks.
bool isPossible(int N, int P, vector<pair<int, int>> &prerequisites)
{
    // Code here
    vector<int> adj[N];
    vector<int> indeg(N, 0);

    for (int i = 0; i < P; i++)
    {
        adj[prerequisites[i].second].push_back(prerequisites[i].first);
        indeg[prerequisites[i].first]++;
    }

    // Kanh's Algo
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        if (!indeg[i])
            q.push(i);
    }
    int count = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        count++;

        for (int j = 0; j < adj[node].size(); j++)
        {
            indeg[adj[node][j]]--;
            if (!indeg[adj[node][j]])
                q.push(adj[node][j]);
        }
    }

    return count == N;
}

int main()
{
    return 0;
}
