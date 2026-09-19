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

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Q1. Merge two binary Max heaps.
void heapify(vector<int> &ans, int index, int n)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < n && ans[left] > ans[largest])
        largest = left;
    if (right < n && ans[right] > ans[largest])
        largest = right;

    if (largest != index)
    {
        swap(ans[largest], ans[index]);
        heapify(ans, largest, n);
    }
}

vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
{
    // your code here
    vector<int> ans;

    for (int i = 0; i < n; i++)
        ans.push_back(a[i]);
    for (int i = 0; i < m; i++)
        ans.push_back(b[i]);

    // convert the array into max heap
    n = ans.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(ans, i, n);
    }

    return ans;
}

int main()
{
    return 0;
}
