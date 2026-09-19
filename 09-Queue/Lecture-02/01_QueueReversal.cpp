#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Q2. Queue Reversal.
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    return q;
}

int main()
{
    return 0;
}
