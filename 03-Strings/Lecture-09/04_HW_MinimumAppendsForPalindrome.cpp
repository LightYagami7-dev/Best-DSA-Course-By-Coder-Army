#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q1. Minimum Appends for Palindrome!
int solve(string A)
{
    string rev = A;
    reverse(rev.begin(), rev.end());
    rev += '$';
    rev += A;

    vector<int> lps(rev.size(), 0);
    int pre = 0, suf = 1;

    while (suf < rev.size())
    {
        if (rev[pre] == rev[suf])
            lps[suf++] = (pre++) + 1;
        else
        {
            if (pre == 0)
                suf++;
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
    return A.size() - lps[rev.size() - 1];
}

int main()
{
    return 0;
}
