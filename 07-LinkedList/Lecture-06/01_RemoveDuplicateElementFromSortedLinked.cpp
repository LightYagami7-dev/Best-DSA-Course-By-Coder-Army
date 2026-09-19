#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Q1. Remove duplicate element from sorted Linked List.
// Method 1:
Node *removeDuplicates(Node *head)
{
    // your code goes here
    vector<int> ans;
    ans.push_back(head->data);

    Node *curr = head->next;
    while (curr)
    {
        if (ans[ans.size() - 1] != curr->data)
        {
            ans.push_back(curr->data);
        }
        curr = curr->next;
    }
    curr = head;
    int index = 0;
    Node *prev = NULL;

    while (index < ans.size())
    {
        curr->data = ans[index++];
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;
    return head;
}

// Method 2:
Node *removeDuplicates(Node *head)
{
    // your code goes here
    if (!head || !head->next)
        return head;

    Node *curr = head->next, *prev = head;
    while (curr)
    {
        if (curr->data == prev->data)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
    }
    return head;
}

int main()
{
    return 0;
}
