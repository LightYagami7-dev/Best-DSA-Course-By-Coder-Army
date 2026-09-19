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

// Q6. Height of Binary Tree.
int height(struct Node *root)
{
    // code here
    if (root == NULL)
        return 0;
    return (1 + max(height(root->left), height(root->right)));
}


int main() {}
