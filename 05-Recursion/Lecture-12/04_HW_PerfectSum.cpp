#include <iostream>
#include <vector>
using namespace std;

// Q2. Perfect Sum
int subset(int arr[], int index, int sum, int n)
{
    if (index == n)
        return sum == 0;

    return subset(arr, index + 1, sum, n) + subset(arr, index + 1, sum - arr[index], n);
}

int main() {}
