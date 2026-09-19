#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Q2. Insert an Element at the Bottom of a Stack.
stack<int> insertAtBottom(stack<int> St, int X)
{
    stack<int> helper;
    while (!St.empty())
    {
        helper.push(St.top());
        St.pop();
    }

    St.push(X);

    while (!helper.empty())
    {
        St.push(helper.top());
        helper.pop();
    }
    return St;
}

int main()
{
    return 0;
}
