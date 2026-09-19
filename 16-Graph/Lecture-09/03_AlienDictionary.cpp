#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Q3. Alien Dictionary.
string findOrder(string dict[], int N, int K)
{
    // code here
    // Adjacency List
    vector<int> adj[K];
    vector<int> indeg(K, 0);

    for (int i = 0; i < N - 1; i++)
    {
        string str1 = dict[i], str2 = dict[i + 1];
        int j = 0, k = 0;

        while (j < str1.size() && k < str2.size() && str1[j] == str2[k])
        {
            j++, k++;
        }

        if (j == str1.size())
            continue;

        adj[str1[j] - 'a'].push_back(str2[k] - 'a');
        indeg[str2[k] - 'a']++;
    }

    // Kanh's Algo

    queue<int> q;
    for (int i = 0; i < K; i++)
    {
        if (!indeg[i])
            q.push(i);
    }
    string ans;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        char c = 'a' + node;
        ans += c;

        for (int j = 0; j < adj[node].size(); j++)
        {
            indeg[adj[node][j]]--;
            if (!indeg[adj[node][j]])
                q.push(adj[node][j]);
        }
    }

    return ans;
}

int main()
{
    return 0;
}
