#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q5. Find the second largest element in an array of unique elements of size n. Where n>3.
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
