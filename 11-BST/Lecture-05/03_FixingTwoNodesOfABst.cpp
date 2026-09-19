#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

struct LNode
{
    int data;
    struct LNode *next;

    LNode(int x)
    {
        data = x;
        next = NULL;
    }
};

struct TNode
{

    int data;
    struct TNode *left;
    struct TNode *right;
    TNode(int x)
    {
        data = x;
        left = right = NULL;
    }
};

// Q3. Fixing Two nodes of a BST.
void correctBST(struct Node *root)
{
    // add code here.
    Node *curr = NULL;
    Node *first = NULL, *second = NULL;
    Node *last = NULL, *present = NULL;

    while (root)
    {
        // Left doesn't exist
        if (!root->left)
        {
            last = present;
            present = root;
            if (last && last->data > present->data)
            {
                if (!first)
                    first = last;
                second = present;
            }
            root = root->right;
        }
        // Left exist
        else
        {
            curr = root->left;
            while (curr->right && curr->right != root)
            {
                curr = curr->right;
            }

            if (!curr->right)
            {
                curr->right = root;
                root = root->left;
            }
            else
            {
                curr->right = NULL;
                last = present;
                present = root;
                if (last && last->data > present->data)
                {
                    if (!first)
                        first = last;
                    second = present;
                }
                root = root->right;
            }
        }
    }
    int num = first->data;
    first->data = second->data;
    second->data = num;
}

int main() {}
