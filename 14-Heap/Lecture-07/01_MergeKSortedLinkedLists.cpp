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
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Q1. Merge K sorted linked lists.
class Compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        // For heap comparision is reverse
        return a->data >= b->data;
    }
};
// Function to merge K sorted linked list.
Node *mergeKLists(Node *arr[], int K)
{
    // Your code here
    priority_queue<Node *, vector<Node *>, Compare> p(arr, arr + K);
    Node *root = new Node(0);
    Node *tail = root;

    Node *temp;

    while (!p.empty())
    {
        temp = p.top();
        p.pop();
        tail->next = temp;
        tail = tail->next;

        if (temp->next)
        {
            p.push(temp->next);
        }
    }
    return root->next;
}

int main()
{
    return 0;
}
