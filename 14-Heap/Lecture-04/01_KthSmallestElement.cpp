#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <climits>
using namespace std;

// Q1. Kth smallest element.
int kthSmallest(int arr[], int l, int r, int k)
{
    // code here
    //  max heap
    priority_queue<int> p;
    for (int i = 0; i < k; i++)
        p.push(arr[i]);

    for (int i = k; i <= r; i++)
    {
        if (arr[i] < p.top())
        {
            p.pop();
            p.push(arr[i]);
        }
    }
    return p.top();
}

int main()
{
    return 0;
}
