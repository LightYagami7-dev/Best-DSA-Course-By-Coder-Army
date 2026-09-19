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

// Q3. Find whether path exist.
int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};

bool valid(int i, int j, int n)
{
    return i >= 0 && j >= 0 && i < n && j < n;
}

// Function to find whether a path exists from the source to destination.
bool is_Possible(vector<vector<int>> &grid)
{
    // code here
    int n = grid.size();

    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                q.push({i, j});
                grid[i][j] = 0;
                break;
            }
        }
    }

    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        for (int k = 0; k < 4; k++)
        {
            int new_i = i + row[k];
            int new_j = j + col[k];

            if (valid(new_i, new_j, n) && grid[new_i][new_j])
            {
                if (grid[new_i][new_j] == 2)
                    return 1;

                q.push({new_i, new_j});
                grid[new_i][new_j] = 0;
            }
        }
    }

    return 0;
}

int main() {}
