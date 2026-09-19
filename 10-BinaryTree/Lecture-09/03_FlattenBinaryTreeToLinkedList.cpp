#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Q3. Flatten binary tree to linked list.
void flatten(Node *root)
{
    // code here
    while (root)
    {
        if (!root->left)
        {
            root = root->right;
        }
        else
        {
            Node *curr = root->left;
            while (curr->right)
                curr = curr->right;
            curr->right = root->right;
            root->right = root->left;
            root->left = NULL;
            root = root->right;
        }
    }
}



int main() {}
