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

// Q1. Merge Lists Alternatingly.
void mergeList(struct Node **p, struct Node **q)
{
    // Code here
    Node *p1 = (*p);
    Node *q1 = (*q);

    Node *r1 = NULL;
    Node *r2 = NULL;

    while (p1 != NULL && q1 != NULL)
    {
        r1 = p1->next;
        r2 = q1->next;

        p1->next = q1;
        q1->next = r1;

        p1 = r1;
        q1 = r2;
    }

    (*q) = q1;
    return;
}

int main()
{
    return 0;
}
