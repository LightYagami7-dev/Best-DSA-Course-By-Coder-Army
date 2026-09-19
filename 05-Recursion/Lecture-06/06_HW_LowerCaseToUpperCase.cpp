#include <iostream>
using namespace std;

// Q2. Lower case to upper case.
void lowerToUpper(string &str, int index)
{
    if (index == -1)
        return;

    str[index] = 'A' + str[index] - 'a';
    lowerToUpper(str, index - 1);
}

int main()
{
    return 0;
}
