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

// Q3. Reverse a Doubly Linked List.
Node *reverseDLL(Node *head)
{
    // Your code here
    if (head->next == NULL)
        return head;

    Node *curr = head, *prev = NULL, *fut = NULL;
    while (curr)
    {
        fut = curr->next;
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    head = prev;
    return head;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    Node *head = NULL;

    // Iteratively:
    for (int i = 0; i < 5; i++)
    {
        if (!head)
        {
            head = new Node(arr[i]);
        }
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    head = createDLL(arr, 0, 5, head);

    Node *temp = head;
    while (head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
