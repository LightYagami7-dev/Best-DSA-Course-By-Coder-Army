#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

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

// Q3. Preorder Traversal and BST.
// Method 1:
void BST(int arr[], int &index, int lower, int upper, int &N)
{
    if (index == N || arr[index] < lower || arr[index] > upper)
        return;

    int value = arr[index++];
    BST(arr, index, lower, value, N);
    BST(arr, index, value, upper, N);
}
int canRepresentBST(int arr[], int N)
{
    // code here
    int index = 0;
    BST(arr, index, INT_MIN, INT_MAX, N);

    return index == N;
}

// Method 2:
int canRepresentBST(int arr[], int N)
{
    // code here
    stack<int> lower, upper;
    lower.push(INT_MIN);
    upper.push(INT_MAX);
    int left, right;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < lower.top())
            return 0;

        while (arr[i] > upper.top())
        {
            upper.pop();
            lower.pop();
        }

        left = lower.top();
        right = upper.top();

        upper.pop();
        lower.pop();

        // Right side
        lower.push(arr[i]);
        upper.push(right);

        // Left side
        lower.push(left);
        upper.push(arr[i]);
    }
    return 1;
}

int main() {}
