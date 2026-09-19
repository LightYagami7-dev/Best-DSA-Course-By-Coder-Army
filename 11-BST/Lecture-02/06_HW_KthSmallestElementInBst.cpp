#include <iostream>
#include <vector>
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

// Q1. Kth smallest element in BST.
void kSmallest(Node *root, int &ans, int &k)
{
    if (!root)
        return;
    kSmallest(root->left, ans, k);
    k--;
    if (k == 0)
    {
        ans = root->data;
        return;
    }

    kSmallest(root->right, ans, k);
}

int kthSmallest(Node *root, int K)
{
    // Your code here
    int ans;
    kSmallest(root, ans, K);
    return ans;
}

int main()
{
    return 0;
}
