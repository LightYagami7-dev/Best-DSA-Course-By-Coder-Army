#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Q2. Preorder traversal (Iterative).
vector<int> preOrder(Node *root)
{
    // code here
    vector<int> ans;
    while (root)
    {
        if (!root->left)
        {
            ans.push_back(root->data);
            root = root->right;
        }
        else
        {
            Node *curr = root->left;
            while (curr->right && curr->right != root)
                curr = curr->right;
            if (curr->right == NULL)
            {
                ans.push_back(root->data);
                curr->right = root;
                root = root->left;
            }
            else
            {
                curr->right = NULL;
                root = root->right;
            }
        }
    }
    return ans;
}

int main()
{
    return 0;
}
