#include <iostream>
using namespace std;

// Q1. Count the Zeros.
int countZeroes(int arr[], int n)
{
    // code here
    int start = 0, end = n - 1, count = 0;
    while (arr[start])
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == 1)
        {
            start = mid + 1;
        }
        else
        {
            start++;
        }
    }

    return end - start + 1;
}

int main()
{
    return 0;
}
