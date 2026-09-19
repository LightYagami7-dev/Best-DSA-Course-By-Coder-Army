#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

// Q2. Diagonal Traversal of Binary Tree.
void find(Node *root, int pos, int &l)
{
    if (!root)
        return;
    l = max(l, pos);

    find(root->left, pos + 1, l);
    find(root->right, pos, l);
}

void findDig(Node *root, int pos, vector<vector<int>> &ans)
{
    if (root == NULL)
        return;
    ans[pos].push_back(root->data);
    findDig(root->left, pos + 1, ans);
    findDig(root->right, pos, ans);
}

vector<int> diagonal(Node *root)
{
    // your code here
    int l = 0;
    find(root, 0, l);

    vector<vector<int>> ans(l + 1);
    findDig(root, 0, ans);

    vector<int> temp;
    for (int i = 0; i < ans.size(); i++)
        for (int j = 0; j < ans[i].size(); j++)
            temp.push_back(ans[i][j]);

    return temp;
}

int main()
{
    return 0;
}
