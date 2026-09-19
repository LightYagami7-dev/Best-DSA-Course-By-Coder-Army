#include <iostream>
using namespace std;

// Q1. Check Palindrome
bool checkPal(string str, int start, int end)
{
    if (start >= end)
        return 1;

    if (str[start] != str[end])
        return 0;
    return checkPal(str, start + 1, end - 1);
}

int main()
{
    return 0;
}
