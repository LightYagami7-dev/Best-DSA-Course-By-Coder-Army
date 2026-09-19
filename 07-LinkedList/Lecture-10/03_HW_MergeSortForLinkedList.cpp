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

struct Node
{
    int data;
    struct Node *next, *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

Node *merge(Node *firstNode, Node *secondNode)
{
    Node *merged = new Node(-1);
    Node *temp = new Node(-1);
    // merged is equal to temp so in the end we have the top
    // Node.
    merged = temp;
    // while either firstNode or secondNode becomes NULL
    while (firstNode != NULL && secondNode != NULL)
    {
        if (firstNode->data <= secondNode->data)
        {
            temp->next = firstNode;
            firstNode = firstNode->next;
        }
        else
        {
            temp->next = secondNode;
            secondNode = secondNode->next;
        }
        temp = temp->next;
    }
    // any remaining Node in firstNode or secondNode gets
    // inserted in the temp List
    while (firstNode != NULL)
    {
        temp->next = firstNode;
        firstNode = firstNode->next;
        temp = temp->next;
    }
    while (secondNode != NULL)
    {
        temp->next = secondNode;
        secondNode = secondNode->next;
        temp = temp->next;
    }
    // return the head of the sorted list
    return merged->next;
}
// function to calculate the middle Element
Node *middle(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (!slow->next && (!fast && !fast->next))
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

struct Node *merge(struct Node *first, struct Node *second)
{
    // base cases when either of two halves is null.
    if (!first)
        return second;
    if (!second)
        return first;
    // comparing data in both halves and storing the smaller in result and
    // recursively calling the merge function for next node in result.
    if (first->data < second->data)
    {
        first->next = merge(first->next, second);
        first->next->prev = first;
        first->prev = NULL;
        // returning the resultant list.
        return first;
    }
    else
    {
        second->next = merge(first, second->next);
        second->next->prev = second;
        second->prev = NULL;
        // returning the resultant list.
        return second;
    }
}
// Function to split the list into two halves.
struct Node *splitList(struct Node *head)
{
    // using two pointers to find the midpoint of list
    struct Node *fast = head, *slow = head;
    // first pointer, slow moves 1 node and second pointer, fast moves
    // 2 nodes in one iteration.
    while (fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    // slow is before the midpoint in the list, so we split the
    // list in two halves from that point.
    struct Node *temp = slow->next;
    slow->next = NULL;
    return temp;
}

// Q1. Merge Sort for Linked List.
Node *mergeSort(Node *head)
{
    // your code here
    if (head->next == NULL)
    {
        return head;
    }
    Node *mid = new Node(-1);
    Node *head2 = new Node(-1);
    mid = middle(head);
    head2 = mid->next;
    mid->next = NULL;
    Node *finalhead = merge(mergeSort(head), mergeSort(head2));
    return finalhead;
};

int main()
{
    return 0;
}
