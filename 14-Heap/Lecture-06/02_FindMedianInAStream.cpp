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

#define MAX 1000

// Q2. Find median in a stream.
priority_queue<int> leftMaxHeap;
priority_queue<int, vector<int>, greater<int>> rightMinHeap;
// Function to insert heap.
void insertHeap(int &x)
{
    if (leftMaxHeap.empty())
    {
        leftMaxHeap.push(x);
        return;
    }

    if (x > leftMaxHeap.top())
        rightMinHeap.push(x);
    else
        leftMaxHeap.push(x);

    balanceHeaps();
}

// Function to balance heaps.
void balanceHeaps()
{
    if (rightMinHeap.size() > leftMaxHeap.size())
    {
        leftMaxHeap.push(rightMinHeap.top());
        rightMinHeap.pop();
    }
    else
    {
        if (rightMinHeap.size() < leftMaxHeap.size() - 1)
        {
            rightMinHeap.push(leftMaxHeap.top());
            leftMaxHeap.pop();
        }
    }
}

// Function to return Median.
double getMedian()
{
    if (leftMaxHeap.size() > rightMinHeap.size())
        return leftMaxHeap.top();
    else
    {
        double ans = (leftMaxHeap.top() + rightMinHeap.top()) / 2;
        return ans;
    }
}

int main() {}
