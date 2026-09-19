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

// Q2. Check If Circular Linked List.
bool isCircular(Node *head)
{
    // Your code here
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        if (temp == head)
            return 1;
    }
    return 0;
}

int main()
{
    return 0;
}
