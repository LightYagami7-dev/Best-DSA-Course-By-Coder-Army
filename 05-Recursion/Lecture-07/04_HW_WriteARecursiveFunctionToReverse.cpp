#include <iostream>
using namespace std;

// Q2. Write a recursive function to reverse the elements of an array.
void reverse(int *arr[], int start, int end)
{
    if (start >= end)
        return;

    swap(arr[start], arr[end]);
    reverse(arr, start + 1, end - 1);
}

int main()
{
    return 0;
}
