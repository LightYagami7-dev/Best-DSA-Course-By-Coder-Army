#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q2. Row with max 1s.
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // code here
    int index = -1;
    int count = 0;
    int i = 0, j = m - 1;
    while (i >= 0 && j >= 0 && i < n && j < m)
    {
        if (arr[i][j] == 1)
        {
            int newCount = m - j;
            if (newCount > count)
            {
                count = newCount;
                index = i;
            }
            j--;
        }
        else
        {
            i++;
        }
    }
    return index;
}

int main()
{
    return 0;
}
