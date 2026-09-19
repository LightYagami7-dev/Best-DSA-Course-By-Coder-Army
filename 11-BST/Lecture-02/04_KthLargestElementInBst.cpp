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

// Q4. Kth largest element in BST.
void kLargest(Node *root, int &ans, int &k)
{
    if (!root)
        return;
    kLargest(root->right, ans, k);
    k--;
    if (k == 0)
    {
        ans = root->data;
        return;
    }

    kLargest(root->left, ans, k);
}

int kthLargest(Node *root, int K)
{
    // Your code here
    int ans;
    kLargest(root, ans, K);
    return ans;
}

int main()
{
    return 0;
}
