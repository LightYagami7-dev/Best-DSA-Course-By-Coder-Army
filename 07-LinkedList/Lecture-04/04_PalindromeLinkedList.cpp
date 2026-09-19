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

// Q4. Palindrome Linked List.
bool isPalindrome(ListNode *head)
{

    if (head == NULL || head->next == NULL)
        return 1;

    // Count the number of Nodes
    int count = 0;
    ListNode *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }

    count /= 2;

    ListNode *curr = head, *prev = NULL;
    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;

    ListNode *front = NULL;
    prev = NULL;

    while (curr)
    {
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }

    ListNode *head1 = head, *head2 = prev;
    while (head1)
    {
        if (head1->val != head2->val)
            return 0;
        head1 = head1->next;
        head2 = head2->next;
    }

    return 1;
}



int main() {
    
}
