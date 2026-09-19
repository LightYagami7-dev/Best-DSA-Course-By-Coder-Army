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

// Q3. Check for Balanced Tree.
int height(Node *root, bool &valid)
{
    if (!root)
        return 0;

    int L = height(root->left, valid);
    if (valid)
    {
        int R = height(root->right, valid);
        if (abs(L - R) > 1)
            valid = 0;
        return 1 + max(L, R);
    }
    return -1;
}

bool isBalanced(Node *root)
{
    //  Your Code here
    bool valid = 1;
    height(root, valid);
    return valid;
}

int main()
{
    return 0;
}
