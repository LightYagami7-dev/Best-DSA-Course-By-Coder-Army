#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Q2. Next Smaller Element.
vector<int> help_classmate(vector<int> arr, int n)
{
    // Your code goes here
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main()
{
    return 0;
}
