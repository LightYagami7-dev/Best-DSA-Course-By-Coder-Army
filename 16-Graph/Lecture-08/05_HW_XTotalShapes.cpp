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

// Q2. X Total Shapes.
int r, c;
int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};

bool valid(int i, int j)
{
    return i >= 0 && i < r && j >= 0 && j < c;
}
// Function to find the number of 'X' total shapes.
int xShape(vector<vector<char>> &grid)
{
    // Code here
    r = grid.size();
    c = grid[0].size();

    queue<pair<int, int>> q;
    int count = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == 'X')
            {
                count++;
                q.push(make_pair(i, j));
                grid[i][j] = 'O';

                while (!q.empty())
                {
                    int i = q.front().first;
                    int j = q.front().second;
                    q.pop();

                    for (int k = 0; k < 4; k++)
                    {
                        if (valid(i + row[k], j + col[k]) && grid[i + row[k]][j + col[k]] == 'X')
                        {
                            q.push(make_pair(i + row[k], j + col[k]));
                            grid[i + row[k]][j + col[k]] = 'O';
                        }
                    }
                }
            }
        }
    }
    return count;
}

int main()
{
    return 0;
}
