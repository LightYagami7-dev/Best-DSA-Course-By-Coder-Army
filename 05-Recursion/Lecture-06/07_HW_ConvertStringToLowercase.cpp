#include <iostream>
using namespace std;

// Q3. Convert String to LowerCase.
void upperToLower(string &str, int index)
{
    if (index == -1)
        return;

    if (str[index] < 'a')
    {
        str[index] = 'a' + str[index] - 'A';
    }
    upperToLower(str, index - 1);
}

int main()
{
    return 0;
}
