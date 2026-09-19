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

// Q2. Palindrome Linked List.
bool isPalindrome(ListNode *head)
{
    if (head->next == NULL)
        return 1;
    vector<int> ans;
    ListNode *temp = head;
    while (temp)
    {
        ans.push_back(temp->val);
        temp = temp->next;
    }

    int start = 0, end = ans.size() - 1;
    while (start < end)
    {
        if (ans[start] != ans[end])
            return 0;
        start++, end--;
    }

    return 1;
}

int main() {}
