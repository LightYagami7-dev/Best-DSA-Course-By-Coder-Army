#include <iostream>
using namespace std;

// Q4. Swap 2 numbers a, b without using extra variables. Range of (-10000<=a,b<=100000).
void swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    return 0;
}
