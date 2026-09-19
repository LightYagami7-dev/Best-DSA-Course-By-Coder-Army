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

// Q1. Circular Linked List Traversal.
void printList(struct Node *head)
{
    // code here
    Node *temp = head;
    cout << temp->data << " ";
    temp = temp->next;
    while (temp != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    return 0;
}
