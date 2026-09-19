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

// Q5. Create a Circular Singly Linked List and also a Circular Doubly Linked List from the given array below.

    // Circular Singly Linked List
    Node *head = NULL;

    for (int i = 0; i < 5; i++)
    {
        Node *curr = head;
        if (curr == NULL)
        {
            head = new Node(arr[0]);
            head->next = head;
            curr = head;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            curr->next = temp;
            temp->next = head;
            curr = temp;
        }
    }

    // Circular Doubly Linked List
    NodeCDLL *head1 = NULL;
    for (int i = 0; i < 5; i++)
    {
        NodeCDLL *curr1 = head1;
        if (curr1 == NULL)
        {
            head1 = new NodeCDLL(arr[0]);
            head1->next = head1;
            head1->prev = head1;
            curr1 = head1;
        }
        else
        {
            NodeCDLL *temp = new NodeCDLL(arr[i]);
            temp->next = head1;
            temp->prev = curr1;
            curr1->next = temp;
            head1->prev = temp;
            curr1 = temp;
        }
    }
}

int main()
{
    return 0;
}
