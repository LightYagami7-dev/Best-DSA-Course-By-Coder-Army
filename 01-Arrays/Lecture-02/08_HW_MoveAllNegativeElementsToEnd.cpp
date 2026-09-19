#include <iostream>
using namespace std;

// Q2. Move all negative elements to end.
void segregateElements(int arr[], int n)
{
    // Your code goes here
    int newArr[n];
    int loc = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            newArr[loc] = arr[i];
            loc++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            newArr[loc] = arr[i];
            loc++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = newArr[i];
    }
}

int main()
{
    return 0;
}
