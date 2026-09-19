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

// Q1. Add two numbers represented by linked lists.
struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    // code here
    first = reverse(first, NULL);
    second = reverse(second, NULL);

    Node *curr1 = first, *curr2 = second;
    Node *head = new Node(0);
    Node *tail = head;
    int sum = 0, carry = 0;

    // Addition
    while (curr1 && curr2)
    {
        sum = curr1->data + curr2->data + carry;
        tail->next = new Node(sum % 10);
        curr1 = curr1->next;
        curr2 = curr2->next;
        tail = tail->next;
        carry = sum / 10;
    }

    while (curr1)
    {
        sum = curr1->data + carry;
        tail->next = new Node(sum % 10);
        curr1 = curr1->next;
        tail = tail->next;
        carry = sum / 10;
    }

    while (curr2)
    {
        sum = curr2->data + carry;
        tail->next = new Node(sum % 10);
        curr2 = curr2->next;
        tail = tail->next;
        carry = sum / 10;
    }

    while (carry)
    {
        tail->next = new Node(carry % 10);
        carry /= 10;
    }

    head = reverse(head->next, NULL);
    return head;
}

int main()
{
    return 0;
}
