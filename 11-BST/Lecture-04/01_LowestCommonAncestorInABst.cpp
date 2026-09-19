#include <iostream>
#include <vector>
#include <stack>
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

// Q1. Lowest Common Ancestor in a BST.
Node *LCA(Node *root, int n1, int n2)
{
    // code here
    if (!root)
        return NULL;
    if (root->data > n1 && root->data > n2)
        return LCA(root->left, n1, n2);
    else if (root->data < n1 && root->data < n2)
        return LCA(root->right, n1, n2);
    else
        return root;
}

int main()
{
    return 0;
}
