#include <iostream>
using namespace std;

// Q1. Subset Sum
void print(int arr[], int index, int n, int sum)
{
    if (index == n)
    {
        cout << sum << endl;
        return;
    }
    print(arr, index + 1, n, sum);
    print(arr, index + 1, n, sum + arr[index]);
}

int main()
{
    return 0;
}
