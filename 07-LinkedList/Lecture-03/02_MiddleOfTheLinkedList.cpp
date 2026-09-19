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

// Q2. Middle of the Linked List.
// Method 1:
ListNode *middleNode(ListNode *head)
{
    int count = 0;
    ListNode *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    count /= 2;
    temp = head;

    while (count--)
    {
        temp = temp->next;
    }

    return temp;
}

// Method 2:
// By using slow and fast pointers concept:
ListNode *middleNode(ListNode *head)
{
    ListNode *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {}
