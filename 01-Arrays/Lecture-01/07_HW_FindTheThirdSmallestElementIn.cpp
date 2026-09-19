#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q6. Find the third smallest element in an array of unique elements size n. Where n>3.
        int size;
        cout << "Enter the size of the array : ";
        cin >> size;
    
        int arr[size];
    
        cout << "Enter the Elements : " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    
        int min = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < min)
                min = arr[i];
        }
    
        int min1 = arr[0];
    
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == min)
            {
                continue;
            }
            else if (arr[i] < min1)
            {
                min1 = arr[i];
            }
        }
    
        int min2 = arr[0];
    
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == min)
            {
                continue;
            }
            else if (arr[i] == min1)
            {
                continue;
            }
            else if (arr[i] < min2)
            {
                min2 = arr[i];
            }
        }
    
        cout << min2 << endl;

    return 0;
}
