#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Q3. Make the array beautiful.
vector<int> makeBeautiful(vector<int> arr)
{
    // code here
    stack<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.empty())
            s.push(arr[i]);
        else if (arr[i] >= 0)
        {
            if (s.top() >= 0)
                s.push(arr[i]);
            else
                s.pop();
        }
        else
        {
            if (s.top() < 0)
                s.push(arr[i]);
            else
                s.pop();
        }
    }

    vector<int> ans(s.size());
    int i = s.size() - 1;
    while (!s.empty())
    {
        ans[i--] = s.top();
        s.pop();
    }
    return ans;
}

int main()
{
    return 0;
}
