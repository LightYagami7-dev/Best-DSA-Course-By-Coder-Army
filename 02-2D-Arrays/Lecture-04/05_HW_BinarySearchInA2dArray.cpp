#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q3. Binary Search in a 2D array which is sorted in decreasing order. N is the number of rows and M is the number of columns.
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int N = matrix.size(), M = matrix[0].size();
    int start = 0, end = N * M - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int row_index = mid / M;
        int col_index = mid % M;

        if (matrix[row_index][col_index] == target)
            return 1;
        else if (matrix[row_index][col_index] > target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return 0;
}

int main() {}
