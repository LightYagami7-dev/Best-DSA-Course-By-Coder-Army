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

    // Q6. Cycle Rotate
        int size;
        cout << "Enter the size of the array : ";
        cin >> size;
    
        int arr[size];
    
        cout << "Enter the Elements : " << endl;
        for (int i = 0; i < size - 1; i++)
        {
            cin >> arr[i];
        }
    
        int temp = arr[size - 1];
        for (int i = size - 2; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
    
        arr[0] = temp;
    
        // Array in Functions
        int arr[5] = {1, 2, 3, 4, 5};
        fun(arr, 5);

    return 0;
}
