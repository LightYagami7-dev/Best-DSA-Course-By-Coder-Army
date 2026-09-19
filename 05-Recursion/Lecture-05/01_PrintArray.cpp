#include <iostream>
using namespace std;

// Q1. Print Array.
// First Approach
void print(int arr[], int index, int n)
{
    if (index == n)
        return;
    cout << arr[index] << " ";
    print(arr, index + 1, n);
}

// Second Approach
void print2(int arr[], int index)
{
    if (index == -1)
        return;
    cout << arr[index] << " ";
    print2(arr, index - 1);
}

int main()
{
    return 0;
}
