#include <iostream>
#include<math.h>
using namespace std;

// Q3. Bit Difference
int countBitsFlip(int a, int b)
{

    // Your logic here
    int count = 0;
    while (a != 0 || b != 0)
    {

        if ((a & 1) != (b & 1))
        {
            count++;
        }
        a = a >> 1;
        b = b >> 1;
    }
    return count;
}

int main()
{
    return 0;
}
