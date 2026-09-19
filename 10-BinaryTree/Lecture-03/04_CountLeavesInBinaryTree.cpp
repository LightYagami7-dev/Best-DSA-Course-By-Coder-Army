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

// Q4. Count Leaves in Binary Tree.
// Method 1:
void countLeaf(Node *root, int &count)
{
    if (root == NULL)
        return;
    if (!root->left && !root->right)
    {
        count++;
        return;
    }
    countLeaf(root->left, count);
    countLeaf(root->right, count);
}

// Method 2:
int countLeaves(Node *root)
{
    // Your code here
    if (root == NULL)
        return 0;
    if (!root->left && !root->right)
    {
        return 1;
    }
    return (countLeaves(root->left) + countLeaves(root->right));
}

int main()
{
    return 0;
}
