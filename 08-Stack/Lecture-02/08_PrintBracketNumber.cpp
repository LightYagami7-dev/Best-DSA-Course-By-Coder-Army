#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Q8. Print Bracket Number.
vector<int> bracketNumbers(string S)
{
    // Your code goes here
    vector<int> ans;
    int count = 0;
    stack<int> st;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '(')
        {
            count++;
            st.push(count);
            ans.push_back(count);
        }
        else if (S[i] == ')')
        {
            ans.push_back(st.top());
            st.pop();
        }
    }
    return ans;
}

int main()
{
    return 0;
}
