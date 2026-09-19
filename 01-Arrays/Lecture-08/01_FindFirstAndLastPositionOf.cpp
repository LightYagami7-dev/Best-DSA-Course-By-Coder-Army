#include <iostream>
#include <vector>
using namespace std;

// Q1. Find First and Last Position of Element in Sorted Array.
vector<int> searchRange(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1, first = -1, last = -1, mid;

    // Find First
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    // Find Last
    start = 0;
    end = arr.size() - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    // vector<int> ans(2);
    // ans[0] = first;
    // ans[1] = last;

    vector<int> ans = {first, last};

    return ans;
}

int main()
{
    return 0;
}
