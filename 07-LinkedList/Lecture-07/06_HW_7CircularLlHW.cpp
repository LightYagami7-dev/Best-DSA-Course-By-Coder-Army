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

struct NodeCDLL
{
    int data;
    struct NodeCDLL *next;
    struct NodeCDLL *prev;

    NodeCDLL(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

int count(Node *head)
{
    int len = 1;
    Node *temp = head;
    while (temp->next != head)
    {

        temp = temp->next;
        len++;
    }
    return len;
}

// Q4.
Node *sortedInsert(Node *head, int data)
{
    // Your code here
    if (head == NULL)
    {
        head = new Node(data);
        head->next = head;
        return (head);
    }

    if (head->data >= data)
    {
        Node *t = new Node(data);
        t->next = head;
        Node *p = head;
        Node *q = NULL;
        while (1)
        {
            q = p;
            p = p->next;
            if (p == head)
                break;
        }
        q->next = t;
        head = t;
        return (head);
    }

    Node *p = head;
    Node *q = NULL;
    while (p->data < data)
    {
        q = p;
        p = p->next;
        if (p == head)
            break;
    }
    Node *t = new Node(data);

    q->next = t;
    t->next = p;

    return (head);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
