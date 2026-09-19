#include <iostream>
#include <vector>
using namespace std;

// Q1. Defanging an IP Address.
string defangIPaddr(string address)
{
    string ans;
    int index = 0;

    while (index < address.size())
    {
        if (address[index] == '.')
            ans += "[.]";
        else
            ans += address[index];
        index++;
    }
    return ans;
}

int main()
{
    return 0;
}
