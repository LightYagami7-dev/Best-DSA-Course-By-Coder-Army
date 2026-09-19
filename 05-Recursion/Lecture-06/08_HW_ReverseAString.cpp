#include <iostream>
using namespace std;

// Q4. Reverse a String.
void rev(string &str, int start, int end)
{
    if (start >= end)
        return;

    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    rev(str, start + 1, end - 1);
}

int main()
{
    return 0;
}
