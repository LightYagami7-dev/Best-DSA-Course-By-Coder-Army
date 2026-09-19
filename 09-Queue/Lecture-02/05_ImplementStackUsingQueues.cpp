#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Q6. Implement Stack using Queues.
// Method 1:
class MyStack
{
public:
    queue<int> q1;
    queue<int> q2;
    MyStack()
    {
    }

    bool empty()
    {
        return q1.empty() && q2.empty();
    }

    void push(int x)
    {
        if (empty())
            q1.push(x);
        else if (q1.empty())
            q2.push(x);
        else
            q1.push(x);
    }

    int pop()
    {
        if (empty())
            return 0;
        else if (q1.empty())
        {
            while (q2.size() > 1)
            {
                q1.push(q2.front());
                q2.pop();
            }

            int ele = q2.front();
            q2.pop();
            return ele;
        }
        else
        {
            while (q1.size() > 1)
            {
                q2.push(q1.front());
                q1.pop();
            }

            int ele = q1.front();
            q1.pop();
            return ele;
        }
    }

    int top()
    {
        if (empty())
            return 0;
        else if (q1.empty())
        {
            return q2.back();
        }
        else
        {
            return q1.back();
        }
    }
};

// Method 2:
class MyStack
{
public:
    queue<int> q1;
    MyStack() {}

    bool empty()
    {
        return q1.empty();
    }

    void push(int x)
    {
        q1.push(x);
    }

    int pop()
    {
        if (empty())
            return 0;
        int n = q1.size() - 1;
        while (n--)
        {
            q1.push(q1.front());
            q1.pop();
        }

        int ele = q1.front();
        q1.pop();
        return ele;
    }

    int top()
    {
        if (empty())
            return 0;
        return q1.back();
    }
};

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
