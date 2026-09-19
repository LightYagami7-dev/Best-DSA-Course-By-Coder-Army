#include <iostream>
#include <vector>
using namespace std;

// Q1. Find Peak Element.
int findPeakElement(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1, mid;
    int n = arr.size();
    if (arr.size() < 2)
        return 0;

    if (arr[0] > arr[1])
        return 0;
    if (arr[n - 1] > arr[n - 2])
        return n - 1;

    while (start <= end)
    {
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
