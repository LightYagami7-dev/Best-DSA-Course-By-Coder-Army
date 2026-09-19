#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Q1. Print all the values of queue.
    int n = q.size();
    while (n--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}

int main()
{
    return 0;
}
