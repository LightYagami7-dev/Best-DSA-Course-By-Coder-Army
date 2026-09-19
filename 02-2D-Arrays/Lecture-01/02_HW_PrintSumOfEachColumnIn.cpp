#include <iostream>
#include <limits.h>
using namespace std;

// Q1. Print sum of each column in 2D array.
void colSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

int main()
{
    return 0;
}
