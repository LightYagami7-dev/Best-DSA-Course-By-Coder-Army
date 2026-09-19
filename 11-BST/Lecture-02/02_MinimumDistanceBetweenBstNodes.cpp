#include <iostream>
#include <vector>
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

// Q2. Minimum Distance Between BST Nodes.
void minDist(Node *root, int &prev, int &ans)
{
    if (!root)
        return;
    minDist(root->left, prev, ans);
    if (prev != INT_MIN)
        ans = min(ans, root->data - prev);
    prev = root->data;
    minDist(root->right, prev, ans);
}

int minDiffInBST(Node *root)
{
    int prev = INT_MIN;
    int ans = INT_MAX;
    minDist(root, prev, ans);
    return ans;
}

int main()
{
    return 0;
}
