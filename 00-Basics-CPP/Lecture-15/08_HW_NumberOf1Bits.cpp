#include <iostream>
#include<math.h>
using namespace std;

// Q2. Number of 1 bits
int setBits(int N)
{
    // Write Your Code here
    int setBits = 0;

    while (N > 0)
    {
        N = N & (N - 1);
        setBits++;
    }

    return setBits;
}

// Another Solution
int setBits(int N)
{
    // USING BINARY OPERATORS
    int count = 0;
    while (N)
    {
        int bit = N & 1;
        // rightmost bit is 1 , then count increased
        if (bit == 1)
            count++;
        // shift towards right to keep counting all bits (left to right) individualy
        N = N >> 1;
    }
    return count;
}

int main()
{
    return 0;
}
