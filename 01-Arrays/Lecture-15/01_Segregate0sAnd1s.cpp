#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q1. Segregate 0s and 1s.
void segregate0and1(int arr[], int n)
{
    // code here
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (arr[start] == 0)
            start++;
        else
        {
            if (arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
                end--;
        }
    }
}

int main()
{
    return 0;
}
