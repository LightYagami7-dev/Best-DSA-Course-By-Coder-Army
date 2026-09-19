#include <iostream>
using namespace std;

// Q1. Find the Maximum element in a given array of size N.
int maxElement(int arr[], int index, int n)
{
    if (index == n - 1)
        return arr[index];

    return max(arr[index], maxElement(arr, index + 1, n));
}

int main()
{
    return 0;
}
