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

    // Q3. Second Max
        int size;
        cout << "Enter the size of the array : ";
        cin >> size;
    
        int arr[size];
    
        cout << "Enter the Elements : " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    
        int max = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
    
        int max1 = arr[0];
    
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == max)
            {
                continue;
            }
            else if (arr[i] > max1)
            {
                max1 = arr[i];
            }
        }
    
        cout << max1 << endl;

    return 0;
}
