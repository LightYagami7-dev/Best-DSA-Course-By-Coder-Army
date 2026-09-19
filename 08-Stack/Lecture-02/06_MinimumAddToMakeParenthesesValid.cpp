#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Q6. Minimum Add to Make Parentheses Valid.
int minAddToMakeValid(string s)
{
    stack<char> st;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (st.empty())
                count++;
            else
                st.pop();
        }
    }

    return count + st.size();
}

int main()
{
    return 0;
}
