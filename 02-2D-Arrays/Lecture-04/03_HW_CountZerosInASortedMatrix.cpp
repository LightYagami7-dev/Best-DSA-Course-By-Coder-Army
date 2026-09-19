#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q1. Count zeros in a sorted matrix.
int countZeros(vector<vector<int>> A)
{
    // code here
    int count = 0;
    for (int i = 0; i < A.size() * A.size(); i++)
    {
        int row = i / A.size();
        int col = i % A.size();

        if (A[row][col] == 0)
            count++;
    }

    return count;
}

int main()
{
    return 0;
}
