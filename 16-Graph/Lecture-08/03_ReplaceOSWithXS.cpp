#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Q3. Replace O's with X's.
int r, c;

int row[4] = {1, -1, 0, 0};
int col[4] = {0, 0, 1, -1};

bool valid(int i, int j)
{
    return i >= 0 && i < r && j >= 0 && j < c;
}

vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
{
    // code here
    r = n;
    c = m;

    queue<pair<int, int>> q;

    // First row
    for (int j = 0; j < c; j++)
    {
        if (mat[0][j] == 'O')
        {
            q.push(make_pair(0, j));
            mat[0][j] = 'T';
        }
    }

    // First col
    for (int j = 1; j < r; j++)
    {
        if (mat[j][0] == 'O')
        {
            q.push(make_pair(j, 0));
            mat[j][0] = 'T';
        }
    }

    for (int j = 1; j < c; j++)
    {
        if (mat[r - 1][j] == 'O')
        {
            q.push(make_pair(r - 1, j));
            mat[r - 1][j] = 'T';
        }
    }

    for (int j = 1; j < r - 1; j++)
    {
        if (mat[j][c - 1] == 'O')
        {
            q.push(make_pair(j, c - 1));
            mat[j][c - 1] = 'T';
        }
    }

    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;

        q.pop();

        for (int k = 0; k < 4; k++)
        {
            if (valid(i + row[k], j + col[k]) && mat[i + row[k]][j + col[k]] == 'O')
            {
                q.push(make_pair(i + row[k], j + col[k]));
                mat[i + row[k]][j + col[k]] = 'T';
            }
        }
    }

    // Replace all with O with X
    // Replace all with T with O
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == 'O')
                mat[i][j] = 'X';
            else if (mat[i][j] == 'T')
                mat[i][j] = 'O';
        }
    }

    return mat;
}

int main() {}
