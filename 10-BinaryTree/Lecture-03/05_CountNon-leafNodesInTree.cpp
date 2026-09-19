#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

// Q5. Count Non-Leaf Nodes in Tree.
int countNonLeafNodes(Node *root)
{
    // Code here
    if (root == NULL)
        return 0;
    if (!root->left && !root->right)
        return 0;
    return (1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right));
}

int main()
{
    return 0;
}
