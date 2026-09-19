#include <iostream>
#include <stack>
#include <vector>
#include <limits.h>
using namespace std;

// Q2. Special Stack.
void push(stack<int> &s, int a)
{
    // Your code goes here
    s.push(a);
}

bool isFull(stack<int> &s, int n)
{
    // Your code goes here
    return s.size() == n;
}

bool isEmpty(stack<int> &s)
{
    // Your code goes here
    return s.empty();
}

int pop(stack<int> &s)
{
    // Your code goes here
    int value = s.top();
    s.pop();
    return value;
}

int getMin(stack<int> &s)
{
    // Your code goes here
    stack<int> st;
    int min = INT_MAX;

    while (!s.empty())
    {
        if (s.top() < min)
        {
            min = s.top();
            st.push(s.top());
            s.pop();
        }
        else
        {
            st.push(s.top());
            s.pop();
        }
    }

    while (!st.empty())
    {
        s.push(st.top());
        st.pop();
    }
    return min;
}

int main()
{
    return 0;
}
