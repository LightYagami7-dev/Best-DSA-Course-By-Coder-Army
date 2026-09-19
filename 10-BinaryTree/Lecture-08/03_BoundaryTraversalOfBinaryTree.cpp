#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

// Q3. Boundary Traversal of binary tree.+
void leftSub(Node *root, vector<int> &ans)
{
    if (!root || (!root->left && !root->right))
        return;

    ans.push_back(root->data);
    if (root->left)
        leftSub(root->left, ans);
    else
        leftSub(root->right, ans);
}

void leaf(Node *root, vector<int> &ans)
{
    if (!root)
        return;

    if (!root->left && !root->right)
    {
        ans.push_back(root->data);
    }

    leaf(root->left, ans);
    leaf(root->right, ans);
}

void rightSub(Node *root, vector<int> &ans)
{
    if (!root || (!root->left && !root->right))
        return;

    if (root->right)
        rightSub(root->right, ans);
    else
        rightSub(root->left, ans);
    ans.push_back(root->data);
}

vector<int> boundary(Node *root)
{
    // Your code here
    vector<int> ans;

    // Root Element
    ans.push_back(root->data);

    // Left Boundary Element
    leftSub(root->left, ans);

    // Leaf Nodes
    if (root->left || root->right)
        leaf(root, ans);

    // Right Boundary Elements in reverse order
    rightSub(root->right, ans);

    return ans;
}

int main() {}
