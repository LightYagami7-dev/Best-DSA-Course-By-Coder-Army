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

// Q1. Rotten Oranges.
int r, c;
int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};

bool valid(int i, int j)
{
    return i >= 0 && i < r && j >= 0 && j < c;
}
// Function to find minimum time required to rot all oranges.
int orangesRotting(vector<vector<int>> &grid)
{
    // Code here
    r = grid.size();
    c = grid[0].size();

    queue<pair<int, int>> q;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push(make_pair(i, j));
            }
        }
    }

    if (q.empty())
        return 0;

    int timer = 0;

    while (!q.empty())
    {
        timer++;
        int curr_oranges = q.size();

        while (curr_oranges--)
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            for (int k = 0; k < 4; k++)
            {
                if (valid(i + row[k], j + col[k]) && grid[i + row[k]][j + col[k]] == 1)
                {
                    q.push(make_pair(i + row[k], j + col[k]));
                    grid[i + row[k]][j + col[k]] = 2;
                }
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == 1)
                return -1;
        }
    }

    return timer - 1;
}

int main()
{
    return 0;
}
