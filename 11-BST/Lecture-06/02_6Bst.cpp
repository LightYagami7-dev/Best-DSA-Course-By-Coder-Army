#include <iostream>
#include <limits.h>
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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Q2.
class Box3
{
public:
    bool BST;
    int sum, min, max;

    Box3()
    {
        BST = 1;
        sum = 0;
        min = INT_MAX;
        max = INT_MIN;
    }
};

Box3 *find(TreeNode *root, int &totalSum)
{
    if (!root)
    {
        return new Box3();
    }

    Box3 *lefthead = find(root->left, totalSum);
    Box3 *righthead = find(root->right, totalSum);

    if (lefthead->BST && righthead->BST && lefthead->max < root->val && righthead->min > root->val)
    {
        Box3 *head = new Box3();
        head->sum = root->val + lefthead->sum + righthead->sum;
        head->min = min(root->val, lefthead->min);
        head->max = max(root->val, righthead->max);
        totalSum = max(totalSum, head->sum);
        return head;
    }
    else
    {
        lefthead->BST = 0;
        return lefthead;
    }
}

int maxSumBST(TreeNode *root)
{
    int totalSum = 0;
    find(root, totalSum);
    return totalSum;
}

int main() {}
