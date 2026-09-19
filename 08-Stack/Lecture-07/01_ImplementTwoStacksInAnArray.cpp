#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Q1. Implement two stacks in an array.
class twoStacks
{
public:
    int *arr;
    int top1, top2;
    int size = 100;

    twoStacks()
    {
        arr = new int[100];
        top1 = -1, top2 = 100;
    }

    // Function to push an integer into the stack1.
    void push1(int x)
    {
        if (top1 + 1 == top2)
            return;
        arr[++top1] = x;
    }

    // Function to push an integer into the stack2.
    void push2(int x)
    {
        if (top2 - 1 == top1)
            return;
        arr[--top2] = x;
    }

    // Function to remove an element from top of the stack1.
    int pop1()
    {
        if (top1 == -1)
            return -1;
        int element = arr[top1--];
        return element;
    }

    // Function to remove an element from top of the stack2.
    int pop2()
    {
        if (top2 == size)
            return -1;
        int element = arr[top2++];
        return element;
    }
};

int main()
{
    return 0;
}
