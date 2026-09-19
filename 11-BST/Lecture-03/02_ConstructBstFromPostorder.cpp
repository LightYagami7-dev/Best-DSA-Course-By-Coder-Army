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

// Q2. Construct BST from Postorder.
Node *BST(int post[], int &index, int lower, int upper)
{
    if (index < 0 || post[index] < lower || post[index] > upper)
        return NULL;

    Node *root = new Node(post[index--]);
    root->right = BST(post, index, root->data, upper);
    root->left = BST(post, index, lower, root->data);
    return root;
}

Node *constructTree(int post[], int size)
{
    // code here
    int index = size - 1;
    return BST(post, index, INT_MIN, INT_MAX);
}

int main()
{
    return 0;
}
