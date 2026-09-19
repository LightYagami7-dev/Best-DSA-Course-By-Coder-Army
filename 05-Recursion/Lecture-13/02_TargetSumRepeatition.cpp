#include <iostream>
using namespace std;

// Q2. Target Sum Repeatition
int subsum(int arr[], int index, int n, int sum)
{
    if (sum == 0)
        return 1;
    if (index == n || sum < 0)
        return 0;

    return subsum(arr, index + 1, n, sum) + subsum(arr, index, n, sum + arr[index]);
}

int main() {}
