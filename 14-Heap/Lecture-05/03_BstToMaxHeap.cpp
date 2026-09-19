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

// Q3. BST to max heap.
void inorder(Node *root, vector<int> &ans)
{
    if (!root)
        return;

    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

void postorder(Node *root, vector<int> &ans, int &index)
{
    if (!root)
        return;

    postorder(root->left, ans, index);
    postorder(root->right, ans, index);
    root->data = ans[index++];
}

void convertToMaxHeapUtil(Node *root)
{
    // Your code goes here
    // inorder traversal
    vector<int> ans;
    inorder(root, ans);
    // post order traversal
    int index = 0;
    postorder(root, ans, index);
}

int main() {}
