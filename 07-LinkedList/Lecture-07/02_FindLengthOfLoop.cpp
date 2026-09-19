#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

bool check(vector<Node *> &visited, Node *curr)
{
    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == curr)
            return 1;
    }
    return 0;
}

// Q2. Find length of Loop.
int countNodesinLoop(struct Node *head)
{
    // Code here
    Node *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            break;
    }

    if (fast == NULL || fast->next == NULL)
        return 0;
    int count = 1;
    slow = slow->next;
    while (slow != fast)
    {
        count++;
        slow = slow->next;
    }

    return count;
}

int main() {}
