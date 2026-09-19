#include <iostream>
using namespace std;

// Q4. Count number of elements between two given elements in array.
int getCount(int arr[], int n, int num1, int num2)
{
    // Complete the function

    int x = -1, y = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num1 && x == -1)
            x = i;
        if (arr[i] == num2)
            y = i;
    }

    if (x == y)
        return 0;

    return (y - x) - 1;
}

int main()
{
    return 0;
}
