#include <iostream>
#include <limits.h>
using namespace std;

// Q6. Smallest Element: Find and print the smallest element in the 2D arrays.
void minElement(int arr[][3], int row, int col)
{
    int min = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    cout << min;
}

int main()
{
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printSumDig(matrix, 3, 3);
}
