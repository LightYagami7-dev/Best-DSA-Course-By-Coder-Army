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

// Q4. Level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    // Your code here
    stack<Node *> s1; // R to L
    stack<Node *> s2; // L to R

    s1.push(root);
    vector<int> ans;

    while (!s1.empty() || !s2.empty())
    {
        if (!s1.empty())
        {
            while (!s1.empty())
            {
                Node *temp = s1.top();
                s1.pop();
                ans.push_back(temp->data);
                if (temp->right)
                    s2.push(temp->right);
                if (temp->left)
                    s2.push(temp->left);
            }
        }
        else
        {
            while (!s2.empty())
            {
                Node *temp = s2.top();
                s2.pop();
                ans.push_back(temp->data);
                if (temp->left)
                    s1.push(temp->left);
                if (temp->right)
                    s1.push(temp->right);
            }
        }
    }
    return ans;
}

int main()
{
    return 0;
}
