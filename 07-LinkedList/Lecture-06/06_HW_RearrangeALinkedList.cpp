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

// Q2. Rearrange a linked list.
void rearrangeEvenOdd(Node *head)
{
    // Your Code here
    if (head->next == NULL)
        return;
    Node *head1 = new Node(0);
    Node *head2 = new Node(0);
    Node *tail1 = head1;
    Node *tail2 = head2;

    Node *curr = head;
    int count = 1;
    while (curr)
    {
        if (count % 2 != 0)
        {
            tail1->next = curr;
            curr = curr->next;
            tail1 = tail1->next;
            tail1->next = NULL;
            count++;
        }
        else
        {
            tail2->next = curr;
            curr = curr->next;
            tail2 = tail2->next;
            tail2->next = NULL;
            count++;
        }
    }

    if (head2->next)
    {
        tail1->next = head2->next;
    }

    tail1 = head1;
    tail2 = head2;
    head1 = head1->next;
    head2 = head2->next;
    delete tail1;
    delete tail2;

    head = head1;
}

int main()
{
    return 0;
}
