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

    // Q2. Reverse Array
        int size;
        cout << "Enter the size of the array : ";
        cin >> size;
    
        int arr[size];
    
        cout << "Enter the elements : ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    
        int i = 0;
        int j = size - 1;
    
        while (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    
        cout << "After Swaping : " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

    return 0;
}
