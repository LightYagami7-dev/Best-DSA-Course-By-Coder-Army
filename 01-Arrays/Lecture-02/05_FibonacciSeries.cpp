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

    // Q5. Fibonacci Series
        int num;
        cout << "Enter the number : ";
        cin >> num;
    
        int arr[num - 1];
        arr[0] = 0;
        arr[1] = 1;
    
        for (int i = 2; i < num; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    
        cout << arr[num - 1];

    return 0;
}
