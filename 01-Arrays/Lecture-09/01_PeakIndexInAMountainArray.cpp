#include <iostream>
#include <vector>
using namespace std;

// Q1. Peak Index in a Mountain Array.
int findKthPositive(vector<int> &arr, int k)
{
    int start = 0, end = arr.size(), mid;
    while (start <= end)
    {
        // mid = start + (end - start) / 2;
        mid = end + (start - end) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    return 0;
}
