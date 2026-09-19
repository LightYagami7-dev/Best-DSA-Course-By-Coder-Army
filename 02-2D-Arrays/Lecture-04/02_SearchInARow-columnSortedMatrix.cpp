#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q2. Search in a row-column sorted Matrix.
bool search(vector<vector<int>> matrix, int n, int m, int x)
{
    // code here
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (matrix[i][j] == x)
            return 1;
        else if (matrix[i][j] > x)
            j--;
        else
            i++;
    }

    return 0;
}

int main() {}
