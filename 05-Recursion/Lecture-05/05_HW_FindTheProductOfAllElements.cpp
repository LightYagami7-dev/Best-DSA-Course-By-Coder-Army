#include <iostream>
using namespace std;

// Q2. Find the Product of all elements in a given array of size N.
int product(int arr[], int index, int n)
{
    if (index == n)
        return 1;
    return arr[index] * product(arr, index + 1, n);
}

int main()
{
    return 0;
}
