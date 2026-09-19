#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

// Q2. Doubly linked list Insertion at given position.
void addNode(Node *head, int pos, int data)
{
    // Your code here
    Node *curr = head;
    while (pos--)
    {
        curr = curr->next;
    }
    // Insert at end
    if (curr->next == NULL)
    {
        Node *temp = new Node(data);
        temp->prev = curr;
        curr->next = temp;
    }
    // Insert at middle
    else
    {
        Node *temp = new Node(data);
        temp->next = curr->next;
        temp->prev = curr;
        curr->next = temp;
        temp->next->prev = temp;
    }
}

int main()
{
    return 0;
}
