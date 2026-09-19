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

// Q2. Merge two sorted linked lists.
Node *sortedMerge(Node *head1, Node *head2)
{
    // code here
    Node *head = new Node(0);
    Node *tail = head;

    Node *tail1 = head1, *tail2 = head2;
    while (tail1 && tail2)
    {
        if (tail1->data <= tail2->data)
        {
            tail->next = new Node(tail1->data);
            tail = tail->next;
            tail1 = tail1->next;
        }
        else
        {
            tail->next = new Node(tail2->data);
            tail = tail->next;
            tail2 = tail2->next;
        }
    }

    if (tail1)
    {
        tail->next = tail1;
    }
    else
    {
        tail->next = tail2;
    }

    tail = head;
    head = head->next;
    delete tail, tail1, tail2;

    return head;
}

int main()
{
    return 0;
}
