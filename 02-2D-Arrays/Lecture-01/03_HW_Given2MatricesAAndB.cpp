#include <iostream>
#include <limits.h>
using namespace std;

// Q2. Given 2 matrices A and B, Print A-B.
void diff(int arr1[][3], int arr2[][3], int row, int col)
{
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

int main()
{
    return 0;
}
