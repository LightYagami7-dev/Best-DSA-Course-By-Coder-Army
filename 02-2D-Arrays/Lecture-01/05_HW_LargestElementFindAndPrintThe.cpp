#include <iostream>
#include <limits.h>
using namespace std;

// Q5. Largest Element: Find and print the largest element in the 2D array.
void maxElement(int arr[][3], int row, int col)
{
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << max;
}

int main()
{
    return 0;
}
