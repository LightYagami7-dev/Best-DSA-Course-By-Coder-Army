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

// Q1. Height of Heap.
int heapHeight(int N, int arr[])
{
    // code here
    if (N == 1)
        return 1;
    int height = 0;
    while (N > 1)
    {
        height++;
        N /= 2;
    }
    return height;
}

int main()
{
    return 0;
}
