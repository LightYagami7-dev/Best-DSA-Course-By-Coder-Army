#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Q2. Maximum Path Sum between 2 Special Nodes.
int pathSum(Node *root, int &sum)
{
    if (!root)
        return 0;

    if (!root->left && !root->right)
        return root->data;

    int left = pathSum(root->left, sum);
    int right = pathSum(root->right, sum);

    if (root->left && root->right)
    {
        sum = max(sum, root->data + left + right);
        return root->data + max(left, right);
    }

    if (root->left)
        return root->data + left;
    if (root->right)
        return root->data + right;
}

int maxPathSum(Node *root)
{
    // code here
    int sum = INT_MIN;
    int value = pathSum(root, sum);

    if (root->left && root->right)
        return sum;
    return max(sum, value);
}

int main() {}
