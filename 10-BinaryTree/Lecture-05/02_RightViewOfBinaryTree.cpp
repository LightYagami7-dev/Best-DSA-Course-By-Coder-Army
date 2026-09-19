#include <iostream>
#include <queue>
#include <vector>
#include<limits.h>
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

// Q2. Right View of Binary Tree.
// Method 1:
vector<int> rightView(Node *root)
{
    // Your Code here
    queue<Node *> q;
    vector<int> ans;
    if (!root)
        return ans;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        ans.push_back(q.front()->data);
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->right)
                q.push(temp->right);
            if (temp->left)
                q.push(temp->left);
        }
    }
    return ans;
}

// Method 2:
void LView(Node *root, int level, vector<int> &ans)
{
    if (!root)
        return;
    if (level == ans.size())
        ans.push_back(root->data);
    LView(root->right, level + 1, ans);
    LView(root->left, level + 1, ans);
}

vector<int> leftView(Node *root)
{
    // Your code here
    vector<int> ans;
    if (!root)
        return ans;

    LView(root, 0, ans);
    return ans;
}

int main()
{
    return 0;
}
