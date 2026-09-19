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

// Q1. Remove loop in Linked List.
// Method 1:
void removeLoop(Node *head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            break;
    }

    if (fast == NULL || fast->next == NULL)
        return;

    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    while (slow->next != fast)
    {
        slow = slow->next;
    }

    slow->next = NULL;
}

// Method 2:
void removeLoop(Node *head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            break;
    }

    if (fast == NULL || fast->next == NULL)
        return;

    int count = 1;
    slow = slow->next;

    while (slow != fast)
    {
        count++;
        slow = slow->next;
    }

    slow = head, fast = head;
    while (count--)
    {
        fast = fast->next;
    }

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    while (slow->next != fast)
    {
        slow = slow->next;
    }

    slow->next = NULL;
}

int main()
{
    return 0;
}
