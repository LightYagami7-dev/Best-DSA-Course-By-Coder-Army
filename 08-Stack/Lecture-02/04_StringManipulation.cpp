#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Q4. String Manipulation.
int removeConsecutiveSame(vector<string> v)
{
    // Your code goes here
    stack<string> s;
    for (int i = 0; i < v.size(); i++)
    {
        if (s.empty())
            s.push(v[i]);
        else if (s.top() == v[i])
            s.pop();
        else
            s.push(v[i]);
    }
    return s.size();
}

int main()
{
    return 0;
}
