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

// Q3. Split a Circular Linked List into two halves.
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    int length = count(head);
    int len = (length % 2 == 0) ? (length / 2) : ((length + 1) / 2);
    int pos = 1;
    Node *temp = head;
    *head1_ref = head;
    while (pos < len)
    {
        temp = temp->next;
        pos++;
    }
    *head2_ref = temp->next;
    temp->next = *head1_ref;

    Node *tail = *head2_ref;
    while (tail->next != head)
    {
        tail = tail->next;
    }
    tail->next = *head2_ref;
}

int main()
{
    return 0;
}
