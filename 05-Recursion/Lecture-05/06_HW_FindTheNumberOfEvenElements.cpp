#include <iostream>
using namespace std;

// Q3. Find the Number of even elements in a given array of size N.
int evenNum(int arr[], int index, int n, int num)
{
    if (index == n)
    {
        return num;
    }

    if (arr[index] % 2 == 0)
        evenNum(arr, index + 1, n, num + 1);
    else
        evenNum(arr, index + 1, n, num);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 6};
    cout << evenNum(arr, 0, 5, 0);
}
