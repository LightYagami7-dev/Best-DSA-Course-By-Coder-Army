#include <iostream>
using namespace std;

// Q2. Sum of all elements
int sum(int arr[], int index, int n)
{
    if (index == n)
        return 0;
    return arr[index] + sum(arr, index + 1, n);
}

int main()
{
    return 0;
}
