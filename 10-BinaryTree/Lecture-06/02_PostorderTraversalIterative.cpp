#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Q2.Postorder Traversal (Iterative)
vector<int> postOrder(Node *root)
{
    // code here
    stack<Node *> s;
    s.push(root);
    vector<int> ans;

    while (!s.empty())
    {
        Node *temp = s.top();
        s.pop();
        ans.push_back(temp->data);
        if (temp->left)
            s.push(temp->left);
        if (temp->right)
            s.push(temp->right);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    return 0;
}
