#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Q3. Reverse First K elements of Queue.
queue<int> modifyQueue(queue<int> q, int k)
{
    // add code here.
    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    int n = q.size();

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    for (int i = 0; i < n; i++)
    {
        q.push(q.front());
        q.pop();
    }

    return q;
}

int main()
{
    return 0;
}
