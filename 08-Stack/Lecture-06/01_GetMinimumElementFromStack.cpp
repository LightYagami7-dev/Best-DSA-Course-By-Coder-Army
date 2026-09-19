#include <iostream>
#include <stack>
#include <vector>
#include <limits.h>
using namespace std;

// Q1. Get minimum element from stack.
// Method 1:
class Solution
{
    int minEle;
    stack<int> st1;
    stack<int> st2;

public:
    /*returns min element from stack*/
    int getMin()
    {

        // Write your code here
        if (st1.empty())
            return -1;
        else
            return st2.top();
    }

    /*returns poped element from stack*/
    int pop()
    {

        // Write your code here
        if (st1.empty())
            return -1;
        else
        {
            int element = st1.top();
            st1.pop();
            st2.pop();
            return element;
        }
    }

    /*push element x into the stack*/
    void push(int x)
    {

        // Write your code here
        if (st1.empty())
        {
            st1.push(x);
            st2.push(x);
        }
        else
        {
            st1.push(x);
            st2.push(min(x, st2.top()));
        }
    }
};

// Method 2:
class Solution
{
    int minEle;
    stack<int> st1;

public:
    /*returns min element from stack*/
    int getMin()
    {

        // Write your code here
        if (st1.empty())
            return -1;
        else
            return st1.top() % 101;
    }

    /*returns poped element from stack*/
    int pop()
    {

        // Write your code here
        if (st1.empty())
            return -1;
        else
        {
            int element = st1.top() / 101;
            st1.pop();
            return element;
        }
    }

    /*push element x into the stack*/
    void push(int x)
    {

        // Write your code here
        if (st1.empty())
        {
            st1.push(x * 101 + x);
        }
        else
        {
            st1.push(x * 101 + min(x, st1.top() % 101));
        }
    }
};

int main()
{
    return 0;
}
