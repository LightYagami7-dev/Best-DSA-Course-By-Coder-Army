#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q3. Transpose of Matrix.
void transpose(vector<vector<int>> &matrix, int n)
{
    // code here
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main()
{
    // Creating a 2D Matrix
    vector<vector<int>> matrix;
    vector<vector<int>> matrix1(3, vector<int>(3, 2));

    cout << "Rows : " << matrix.size() << endl;
    cout << "Columns : " << matrix[0].size() << endl;
}
