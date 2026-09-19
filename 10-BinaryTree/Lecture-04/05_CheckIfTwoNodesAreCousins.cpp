#include <iostream>
#include <vector>
#include <stack>
#include <queue>
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

// Q5. Check if two Nodes are Cousins.
bool parent(Node *root, int a, int b)
{
    if (root == NULL)
        return 0;
    if (root->left && root->right)
    {
        if (root->left->data == a && root->right->data == b)
            return 1;
        if (root->left->data == b && root->right->data == a)
            return 1;
    }
    return (parent(root->left, a, b) || parent(root->right, a, b));
}

bool isCousins(Node *root, int a, int b)
{
    // add code here.
    // Find the level
    queue<Node *> q;
    q.push(root);

    int l1 = -1, l2 = -1;
    int level = 0;
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->data == a)
                l1 = level;
            if (temp->data == b)
                l2 = level;
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        level++;
        if (l1 != l2)
            return 0;
        if (l1 != -1)
            break;
    }
    return !parent(root, a, b);
}

int main() {}
