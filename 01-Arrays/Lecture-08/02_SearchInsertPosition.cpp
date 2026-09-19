#include <iostream>
#include <vector>
using namespace std;

// Q2. Search Insert Position.
int searchInsert(vector<int> &arr, int key)
{
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
        // int mid = (start + end) / 2;
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return start;
}

int main()
{
    return 0;
}
