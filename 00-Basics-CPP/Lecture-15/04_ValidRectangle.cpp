#include <iostream>
#include <cmath>
using namespace std;

// Q4. Valid Rectangle
bool validRec(int a, int b, int c, int d)
{
    if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
    {
        return 1;
    }
    return 0;
}

int main()
{
    return 0;
}
