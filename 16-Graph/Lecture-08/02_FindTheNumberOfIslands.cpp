#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Q2. Find the number of islands.
int c, r;
int row[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
int col[8] = {-1, 0, 1, -1, 0, 1, -1, 1};

bool valid(int i, int j)
{
    return i >= 0 && i < r && j >= 0 && j < c;
}
// Function to find the number of islands.
int numIslands(vector<vector<char>> &grid)
{
    // Code here
    r = grid.size();
    c = grid[0].size();

    queue<pair<int, int>> q;
    int count = 0;

    // Check the char 1 in out grid
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == '1')
            {
                count++;
                q.push(make_pair(i, j));
                grid[i][j] = '0';

                while (!q.empty())
                {
                    int new_i = q.front().first;
                    int new_j = q.front().second;

                    q.pop();

                    for (int k = 0; k < 8; k++)
                    {
                        if (valid(new_i + row[k], new_j + col[k]) && grid[new_i + row[k]][new_j + col[k]] == '1')
                        {
                            grid[new_i + row[k]][new_j + col[k]] = '0';
                            q.push(make_pair(new_i + row[k], new_j + col[k]));
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
