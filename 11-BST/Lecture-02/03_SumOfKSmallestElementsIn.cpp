#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

// Q3. Sum of k smallest elements in BST.
void kSum(Node *root, int &sum, int &k)
{
    if (!root)
        return;
    kSum(root->left, sum, k);
    k--;
    if (k >= 0)
        sum += root->data;
    if (k < 0)
        return;
    kSum(root->right, sum, k);
}

// Function to find ceil of a given input in BST. If input is more
// than the max key in BST, return -1
int sum(Node *root, int k)
{

    // Your code here
    int sum = 0;
    kSum(root, sum, k);
    return sum;
}

int main()
{
    return 0;
}
