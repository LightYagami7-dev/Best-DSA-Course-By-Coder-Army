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

Node *reverse(Node *curr, Node *prev)
{
    if (curr == NULL)
        return prev;
    Node *front = curr->next;
    curr->next = prev;
    return reverse(front, curr);
}

// Q2. Reverse a Linked List in groups of given size.
struct Node *reverseIt(struct Node *head, int k)
{
    // Complete this method
    // First, dummy Node create karo

    Node *first = new Node(0);
    first->next = head;
    head = first;
    int x;
    Node *second, *prev, *curr, *front;

    while (first->next)
    {
        x = k;
        second = first->next;
        prev = first;
        curr = first->next;

        while (x && curr)
        {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
            x--;
        }

        first->next = prev;
        second->next = curr;
        first = second;
    }

    first = head;
    head = head->next;
    delete first;
    return head;
}


int main() {}
