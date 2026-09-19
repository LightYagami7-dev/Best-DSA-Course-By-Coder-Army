#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q2.  Matrix Rotation by 180 degree.
void rotate(vector<vector<int>> &matrix)
{
    // Code here
    int n = matrix.size();

    // Column wise reverse
    for (int j = 0; j < n; j++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[start][j], matrix[end][j]);
            start++, end--;
        }
    }

    // Row wise reverse
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
}

int main()
{
    return 0;
}
