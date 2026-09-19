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

// Q1. Construct Binary Search Tree from Preorder Traversal.
TreeNode *BST(vector<int> &preorder, int &index, int lower, int upper)
{
    if (index == preorder.size() || preorder[index] < lower || preorder[index] > upper)
        return NULL;

    TreeNode *root = new TreeNode(preorder[index++]);
    root->left = BST(preorder, index, lower, root->val);
    root->right = BST(preorder, index, root->val, upper);
    return root;
}

TreeNode *bstFromPreorder(vector<int> &preorder)
{
    int index = 0;
    return BST(preorder, index, INT_MIN, INT_MAX);
}

int main()
{
    return 0;
}
