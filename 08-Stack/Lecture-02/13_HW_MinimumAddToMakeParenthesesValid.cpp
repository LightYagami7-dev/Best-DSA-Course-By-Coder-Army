#include <iostream>
#include <stack>
#include <vector>
#include <limits.h>
using namespace std;

// Q4. Minimum Add to Make Parentheses Valid.
int minAddToMakeValid(string s)
{
    int left = 0, right = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            left++;
        else if (s[i] == ')')
        {
            if (left)
                left--;
            else
                right++;
        }
    }
    return left + right;
}

int main() {}
