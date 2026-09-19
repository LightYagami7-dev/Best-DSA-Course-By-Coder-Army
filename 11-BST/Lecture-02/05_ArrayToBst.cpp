#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

// Q5. Array to BST.
void ArrayToBST(vector<int> &arr, int start, int end, vector<int> &ans)
{
    if (start > end)
        return;

    int mid = start + (end - start) / 2;
    ans.push_back(arr[mid]);
    ArrayToBST(arr, start, mid - 1, ans);
    ArrayToBST(arr, mid + 1, end, ans);
}

vector<int> sortedArrayToBST(vector<int> &nums)
{
    // Code here
    vector<int> ans;
    ArrayToBST(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {}
