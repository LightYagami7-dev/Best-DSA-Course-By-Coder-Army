#include <iostream>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;

public:
    MyStack() { top = -1; }
    int pop();
    void push(int);
};

class StackNode{
    int data;
    StackNode *next;
    StackNode(int x){
        data = x;
        next = NULL;
    }
};

// Q2. Implement Stack using Linked List.
// void MyStack ::push(int x)
// {
//     // Your Code
//     StackNode *temp = new StackNode(x);
//     if (temp == NULL)
//         return;
//     temp->next = top;
//     top = temp;
// }

// // Function to remove an item from top of the stack.
// int MyStack ::pop()
// {
//     // Your Code
//     if (top == NULL)
//         return -1;
//     StackNode *temp = top;
//     int value = top->data;
//     top = top->next;
//     delete temp;
//     return value;
// }

int main()
{
    return 0;
}
