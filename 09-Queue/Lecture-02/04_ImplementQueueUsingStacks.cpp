#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Q5. Implement Queue using Stacks.
class MyQueue
{
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue()
    {
    }

    bool empty()
    {
        return st1.empty() && st2.empty();
    }

    void push(int x)
    {
        st1.push(x);
    }

    int pop()
    {
        if (empty())
            return 0;
        if (!st2.empty())
        {
            int ele = st2.top();
            st2.pop();
            return ele;
        }
        else
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            int ele = st2.top();
            st2.pop();
            return ele;
        }
    }

    int peek()
    {
        if (empty())
            return 0;
        if (!st2.empty())
        {
            return st2.top();
        }
        else
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }
};

int main()
{
    return 0;
}
