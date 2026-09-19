#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q2.  Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. Question was explained in the class.
        int arr[100];
        int n;
        cout << "Enter the number of elements : ";
        cin >> n;
        cout << "Enter the elements : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = i; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
                else
                    break;
            }
        }
    
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

    return 0;
}
