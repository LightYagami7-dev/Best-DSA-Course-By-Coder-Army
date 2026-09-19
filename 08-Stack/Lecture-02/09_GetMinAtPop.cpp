#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Q9. Get min at pop.
stack<int> _push(int arr[], int n)
{
    // your code here
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            st.push(arr[i]);
        else
            st.push(min(arr[i], st.top()));
    }

    return st;
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s)
{
    // your code here
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main() {}
