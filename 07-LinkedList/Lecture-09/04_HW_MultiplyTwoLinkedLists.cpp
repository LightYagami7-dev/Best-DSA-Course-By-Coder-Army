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

// Q2. Multiply two linked lists.
#define mod 1000000007
long long multiplyTwoLists(Node *l1, Node *l2)
{
    // Your code here
    long long num1 = 0, num2 = 0;
    Node *temp1 = l1, *temp2 = l2;
    while (temp1)
    {
        num1 = ((num1 * 10) + temp1->data) % mod;
        temp1 = temp1->next;
    }

    while (temp2)
    {
        num2 = ((num2 * 10) + temp2->data) % mod;
        temp2 = temp2->next;
    }

    long long ans = (num1 * num2) % mod;

    return ans;
}

int main() {}
