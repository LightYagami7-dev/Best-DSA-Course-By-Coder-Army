#include <iostream>
#include <vector>
#include <stack>
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

// Q2. Print BST elements in given range.
void find(Node *root, vector<int> &ans, int &low, int &high)
{
    if (!root)
        return;
    if (root->data > low && root->data > high)
        find(root->left, ans, low, high);
    else if (root->data < low && root->data < high)
        find(root->right, ans, low, high);
    else
    {
        find(root->left, ans, low, high);
        ans.push_back(root->data);
        find(root->right, ans, low, high);
    }
}

vector<int> printNearNodes(Node *root, int low, int high)
{
    // code here
    vector<int> ans;
    find(root, ans, low, high);
    return ans;
}

int main()
{
    return 0;
}
