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

// Q3.Sum of Binary Tree.
// Method 1:
void totalSum(Node *root, long int &sum)
{
    if (!root)
        return;
    sum += root->data;
    totalSum(root->left, sum);
    totalSum(root->right, sum);
}

// Method 2:
long int sumBT(Node *root)
{
    // Code here
    if (root == NULL)
        return 0;
    return (root->data + sumBT(root->left) + sumBT(root->right));
}

int main()
{
    return 0;
}
