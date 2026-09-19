#include <iostream>
using namespace std;

int search(int arr[], int N, int X)
{

    // Your code here
    for (int i = 0; i <= N; i++)
    {
        if (arr[i] == X)
        {
            return i;
        }
    }
    return -1;
}

void swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void fun(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{

int main()
{

    // Q1. Search Element
        int size;
        cout << "Enter the size of the array : ";
        cin >> size;
    
        int arr[size];
    
        cout << "Enter the elements : ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    
        cout << "Enter the Element you want to search : ";
        int x;
        cin >> x;
    
        int ans = search(arr, size, x);
        cout << ans;

    return 0;
}
