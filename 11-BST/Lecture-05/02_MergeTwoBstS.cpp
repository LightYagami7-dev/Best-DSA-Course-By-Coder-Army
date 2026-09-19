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

// Q2. Merge two BST 's.
// Method 1:
void inorder(Node *root, vector<int> &ans)
{
    if (!root)
        return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

// Function to return a list of integers denoting the node
// values of both the BST in a sorted order.
vector<int> merge(Node *root1, Node *root2)
{
    // Your code here
    vector<int> ans1;
    vector<int> ans2;

    inorder(root1, ans1);
    inorder(root2, ans2);

    vector<int> ans;
    int i = 0, j = 0;

    while (i < ans1.size() && j < ans2.size())
    {
        if (ans1[i] < ans2[j])
            ans.push_back(ans1[i++]);
        else
            ans.push_back(ans2[j++]);
    }

    while (i < ans1.size())
        ans.push_back(ans1[i++]);
    while (j < ans2.size())
        ans.push_back(ans2[j++]);

    return ans;
}

// Method 2:
vector<int> merge(Node *root1, Node *root2)
{
    // Your code here
    stack<Node *> s1;
    stack<Node *> s2;

    while (root1)
    {
        s1.push(root1);
        root1 = root1->left;
    }
    while (root2)
    {
        s2.push(root2);
        root2 = root2->left;
    }

    vector<int> ans;

    while (!s1.empty() && !s2.empty())
    {
        if (s1.top()->data < s2.top()->data)
        {
            ans.push_back(s1.top()->data);
            Node *temp = s1.top();
            s1.pop();
            if (temp->right)
            {
                s1.push(temp->right);
                temp = temp->right->left;
                while (temp)
                {
                    s1.push(temp);
                    temp = temp->left;
                }
            }
        }
        else if (s1.top()->data > s2.top()->data)
        {
            ans.push_back(s2.top()->data);
            Node *temp = s2.top();
            s2.pop();
            if (temp->right)
            {
                s2.push(temp->right);
                temp = temp->right->left;
                while (temp)
                {
                    s2.push(temp);
                    temp = temp->left;
                }
            }
        }
        else
        {
            ans.push_back(s1.top()->data);
            Node *temp = s1.top();
            s1.pop();
            if (temp->right)
            {
                s1.push(temp->right);
                temp = temp->right->left;
                while (temp)
                {
                    s1.push(temp);
                    temp = temp->left;
                }
            }

            ans.push_back(s2.top()->data);
            temp = s2.top();
            s2.pop();
            if (temp->right)
            {
                s2.push(temp->right);
                temp = temp->right->left;
                while (temp)
                {
                    s2.push(temp);
                    temp = temp->left;
                }
            }
        }
    }

    while (!s1.empty())
    {
        ans.push_back(s1.top()->data);
        Node *temp = s1.top()->right;
        s1.pop();
        while (temp)
        {
            s1.push(temp);
            temp = temp->left;
        }
    }
    while (!s2.empty())
    {
        ans.push_back(s2.top()->data);
        Node *temp = s2.top()->right;
        s2.pop();
        while (temp)
        {
            s2.push(temp);
            temp = temp->left;
        }
    }

    return ans;
}

int main()
{
    return 0;
}
