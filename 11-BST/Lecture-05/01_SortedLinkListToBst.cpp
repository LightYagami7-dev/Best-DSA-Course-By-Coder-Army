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

// Q1. Sorted Link List to BST.
TNode *buildBST(vector<int> &tree, int start, int end)
{
    if (start > end)
        return NULL;

    int mid = start + (end - start + 1) / 2;
    TNode *temp = new TNode(tree[mid]);

    temp->left = buildBST(tree, start, mid - 1);
    temp->right = buildBST(tree, mid + 1, end);
    return temp;
}

TNode *sortedListToBST(LNode *head)
{
    // code here
    vector<int> tree;
    while (head)
    {
        tree.push_back(head->data);
        head = head->next;
    }

    return buildBST(tree, 0, tree.size() - 1);
}

int main()
{
    return 0;
}
