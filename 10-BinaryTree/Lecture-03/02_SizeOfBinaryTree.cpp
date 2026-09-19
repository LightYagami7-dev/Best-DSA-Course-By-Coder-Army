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

// Q2. Size of Binary Tree.
// Method 1:
void total(Node *root, int &count)
{
    if (root == NULL)
        return;
    count++;
    total(root->left, count);
    total(root->right, count);
}

// Method 2:
int totalNode(Node *root)
{
    // Your code here
    if (root == NULL)
        return 0;
    return (1 + totalNode(root->left) + totalNode(root->right));
}

int main()
{
    return 0;
}
