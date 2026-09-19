#include <iostream>
using namespace std;

// Q3. Number of occurrence.
int count(int arr[], int n, int x)
{
    // code here
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    return 0;
}
