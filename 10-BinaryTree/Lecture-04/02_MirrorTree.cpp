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

// Q2. Mirror Tree.
void mirror(Node *root)
{
    // code here
    if (!root)
        return;

    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;
    mirror(root->left);
    mirror(root->right);
}

int main()
{
    return 0;
}
