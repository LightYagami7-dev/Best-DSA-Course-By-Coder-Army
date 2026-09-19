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

    // Q4. Missing Number
        int size;
        cout << "Enter the size of the array : ";
        cin >> size;
    
        int arr[size];
    
        cout << "Enter the Elements : " << endl;
        for (int i = 0; i < size - 1; i++)
        {
            cin >> arr[i];
        }
    
        int sum = 0;
        for (int i = 0; i < size - 1; i++)
        {
            sum += arr[i];
        }
    
        sum = size * (size + 1) / 2 - sum;
    
        cout << sum;

    return 0;
}
