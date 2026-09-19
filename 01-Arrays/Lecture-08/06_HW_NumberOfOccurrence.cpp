#include <iostream>
using namespace std;

// Q2. Number of occurrence.
// Brute Force Approach
int count(int arr[], int n, int x)
{
    // code here
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    return count;
}

// Optimized Approach using Binary Search
int count(int arr[], int n, int x)
{
    // code here
    int start = 0, end = n - 1, mid;
    while (arr[start] != x || arr[end] != x)
    {
        if (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] == x)
            {
                if (arr[start] != x)
                {
                    start++;
                }
                if (arr[end] != x)
                {
                    end--;
                }
            }
            else if (arr[mid] > x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            return 0;
        }
    }

    return end - start + 1;
}

int main()
{
    return 0;
}
