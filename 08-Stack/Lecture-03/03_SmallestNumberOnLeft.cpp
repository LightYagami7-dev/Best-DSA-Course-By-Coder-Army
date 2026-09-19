#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Q3. Smallest number on left.
vector<int> leftSmaller(int n, int arr[])
{
    // code here
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
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
