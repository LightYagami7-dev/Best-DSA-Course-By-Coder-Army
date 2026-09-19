#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Q2. Course Schedule.
vector<int> findOrder(int N, int P, vector<vector<int>> prerequisites)
{
    // code here
    vector<int> adj[N];
    vector<int> indeg(N, 0);

    for (int i = 0; i < P; i++)
    {
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        indeg[prerequisites[i][0]]++;
    }

    // Kanh's Algo
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        if (!indeg[i])
            q.push(i);
    }
    vector<int> ans;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (int j = 0; j < adj[node].size(); j++)
        {
            indeg[adj[node][j]]--;
            if (!indeg[adj[node][j]])
                q.push(adj[node][j]);
        }
    }

    vector<int> temp;

    return ans.size() == N ? ans : temp;
}

int main()
{
    return 0;
}
