#include <iostream>
using namespace std;

// Q4. Lowercase to Uppercase
void lowerToUpper(string &str, int index)
{
    if (index == -1)
        return;

    str[index] = 'A' + str[index] - 'a';
    lowerToUpper(str, index - 1);
}

int main() {}
