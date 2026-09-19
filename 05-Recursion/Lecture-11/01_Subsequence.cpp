#include <iostream>
#include <vector>
using namespace std;

// Q1. Subsequence.
void subseq(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> &temp)

{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[index]);
    subseq(arr, index + 1, n, ans, temp);
    temp.pop_back();
    subseq(arr, index + 1, n, ans, temp);
}

int main()
{
    return 0;
}
