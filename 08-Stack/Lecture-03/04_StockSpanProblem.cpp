#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Q4. Stock span problem.
vector<int> calculateSpan(int price[], int n)
{
    // Your code here
    vector<int> ans(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && price[i] > price[st.top()])
        {
            ans[st.top()] = st.top() - i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        ans[st.top()] = st.top() + 1;
        st.pop();
    }
    return ans;
}

int main() {}
