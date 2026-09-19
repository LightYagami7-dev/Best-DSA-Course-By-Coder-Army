#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Q2.
int maximalRectangle(vector<vector<char>> &matrix)
{
    int ans = 0, row = matrix.size(), col = matrix[0].size();
    vector<int> heights(col, 0);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == '0')
                heights[j] = 0;
            else
                heights[j] += 1;
        }
        ans = max(ans, largestRectangleArea(heights));
    }
    return ans;
}

int main()
{
    return 0;
}
