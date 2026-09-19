#include <iostream>
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

// Q1. Reverse a sublist of a linked list.
Node *reverseBetween(Node *head, int m, int n)
{
    // code here
    Node *first = NULL;
    Node *second = head;
    for (int i = 1; i < m; i++)
    {
        first = second;
        second = second->next;
    }

    Node *prev = second;
    Node *curr = second->next;
    Node *fut = NULL;

    for (int i = m; i < n; i++)
    {
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }

    if (m != 1)
    {
        first->next = prev;
        second->next = curr;
    }
    else
    {
        second->next = curr;
        head = prev;
    }

    return head;
}

int main()
{
    return 0;
}
