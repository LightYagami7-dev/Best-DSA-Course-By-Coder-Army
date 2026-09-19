#include <iostream>
using namespace std;

// Q1. Linear Search.
bool linearSearch(int arr[], int X, int index, int N)
{
    if (index == N)
        return 0;

    if (arr[index] == X)
        return 1;

    return linearSearch(arr, X, index + 1, N);
}

int main()
{
    return 0;
}
