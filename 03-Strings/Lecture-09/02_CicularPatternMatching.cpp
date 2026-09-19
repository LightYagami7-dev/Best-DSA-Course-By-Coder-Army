#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q2. Cicular Pattern Matching

void lpsFind(vector<int> &lps, string s)
{
    int pre = 0, suf = 1;

    while (suf < s.size())
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }
        else
        {
            if (pre == 0)
                lps[suf++] = 0;
            else
                pre = lps[pre - 1];
        }
    }
}

int KMP_Match(string haystack, string needle)
{
    vector<int> lps(needle.size(), 0);
    lpsFind(lps, needle);

    int first = 0, second = 0;

    while (first < haystack.size() && second < needle.size())
    {
        if (haystack[first] == needle[second])
            first++, second++;
        else
        {
            if (second == 0)
            {
                first++;
            }
            else
            {
                second = lps[second - 1];
            }
        }
    }

    if (second == needle.size())
        return 1;
    return 0;
}

int circularPatternMatching(string a, string b)
{
    if (a == b)
        return 1;

    a += a;

    return KMP_Match(a, b);
}

int main()
{
    return 0;
}
