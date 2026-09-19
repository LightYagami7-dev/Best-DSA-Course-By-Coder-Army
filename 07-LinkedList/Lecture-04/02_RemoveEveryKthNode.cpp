#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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

// Q2. Remove every kth Node.
Node *deleteK(Node *head, int k)
{
    // Your code here
    Node *curr = head, *prev = NULL;
    if (k == 1)
        return NULL;
    int count = 1;
    while (curr)
    {
        if (k == count)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count = 1;
        }
        else
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
    }
    return head;
}

int main()
{
    return 0;
}
