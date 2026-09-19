#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void display(queue<int> q)
{
    while (q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

// Q1. Print all numbers in every window of size k.
void printKElements(int arr[], int k, int n)
{
    queue<int> q;
    for (int i = 0; i < k - 1; i++)
        q.push(arr[i]);
    for (int i = k - 1; i < n; i++)
    {
        q.push(arr[i]);
        display(q);
        q.pop();
    }
}

int main()
{
    return 0;
}
