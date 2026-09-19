#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <climits>
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

// Q2. Is Binary Tree Heap.
int count(Node *root)
{
    if (!root)
        return 0;
    return 1 + count(root->left) + count(root->right);
}

bool CBT(Node *root, int index, int n)
{
    if (!root)
        return 1;
    if (index >= n)
        return 0;

    return CBT(root->left, 2 * index + 1, n) && CBT(root->right, 2 * index + 2, n);
}

bool maxheap(Node *root)
{
    if (root->left)
    {
        if (root->data < root->left->data)
            return 0;
        if (!maxheap(root->left))
            return 0;
    }

    if (root->right)
    {
        if (root->data < root->right->data)
            return 0;
        return maxheap(root->right);
    }

    return 1;
}
bool isHeap(struct Node *tree)
{
    // code here

    // count nodes in the tree
    int num = count(tree);
    // CBT hai ya nhi
    if (!CBT(tree, 0, num))
        return 0;
    // Every parent >= child
    return maxheap(tree);
}

int main()
{
    return 0;
}
