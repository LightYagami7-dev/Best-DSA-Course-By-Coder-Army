#include <iostream>
using namespace std;

// Q2. Target Sum
bool find(int arr[], int index, int n, int target)
{
    if (target == 0)
        return 1;
    if (index == n || target < 0)
        return 0;

    return find(arr, index + 1, n, target) || find(arr, index + 1, n, target - arr[index]);
}

int main() {}
