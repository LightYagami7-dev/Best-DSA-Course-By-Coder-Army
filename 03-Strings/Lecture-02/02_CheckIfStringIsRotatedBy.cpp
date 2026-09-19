#include <iostream>
#include <vector>
using namespace std;

// Q2. Check if string is rotated by two places.
void rotateCw(string &s)
{
    char c = s[s.size() - 1];
    int index = s.size() - 2;

    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = c;
}

void rotateAcw(string &s)
{
    char c = s[0];
    int index = 1;

    while (index < s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = c;
}

bool isRotated(string str1, string str2)
{
    // Your code here
    if (str1.size() != str2.size())
        return 0;

    string cw, acw;

    cw = str1;

    rotateCw(cw);
    rotateCw(cw);

    if (cw == str2)
        return 1;

    acw = str1;
    rotateAcw(acw);
    rotateAcw(acw);

    if (acw == str2)
        return 1;

    return 0;
}

int main()
{
    return 0;
}
