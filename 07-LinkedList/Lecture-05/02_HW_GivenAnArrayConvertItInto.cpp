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

// Q1. Given an array, convert it into a doubly linked List by inserting each element at the start of the Doubly Linked List. Solve the problem iteratively and Recursively.

// Recursively:
Node *createDLL(int arr[], int index, int size, Node *curr)
{
    if (index == size)
    {
        curr->prev = NULL;
        return curr;
    }

    Node *temp = new Node(arr[index]);
    if (curr)
    {
        temp->next = curr;
        curr->prev = temp;
    }
    else
    {
        temp->next = curr;
    }
    return createDLL(arr, index + 1, size, temp);
}

int main()
{
    return 0;
}
