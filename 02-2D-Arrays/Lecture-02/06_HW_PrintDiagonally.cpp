#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q3. Print Diagonally.
vector<int> downwardDiagonal(int N, vector<vector<int>> A)
{
    // Your code goes here
    vector<int> ans;
    int row = 0, col = 0;

    for (int i = 0; i < N; i++)
    {
        row = 0;
        col = i;
        while (row <= i && col >= 0)
        {
            ans.push_back(A[row][col]);
            row++;
            col--;
        }
    }

    for (int i = 1; i < N; i++)
    {
        row = i;
        col = N - 1;
        while (row <= N - 1 && col >= i)
        {
            ans.push_back(A[row][col]);
            row++;
            col--;
        }
    }

    return ans;
}

int main()
{
    return 0;
}
