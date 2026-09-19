#include <iostream>
#include <limits.h>
using namespace std;

// Q3. Given a matrix of size n*n, Print sum of diagonal element.
void printSumDig(int matrix[][3], int row, int col)
{
    int first = 0, second = 0;
    for (int i = 0; i < row; i++)
        first += matrix[i][i];

    int i = 0, j = col - 1;
    while (j >= 0)
    {
        second += matrix[i][j];
        i++;
        j--;
    }

    cout << first + second - matrix[row / 2][row / 2] << endl;
}

int main()
{
    return 0;
}
