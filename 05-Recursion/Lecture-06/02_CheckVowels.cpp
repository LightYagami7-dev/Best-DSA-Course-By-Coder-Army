#include <iostream>
using namespace std;

// Q2. Check Vowels
int count(string str, int index)
{
    if (index == -1)
        return 0;
    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
        return 1 + count(str, index - 1);

    else
        return count(str, index - 1);
}

int main()
{
    return 0;
}
