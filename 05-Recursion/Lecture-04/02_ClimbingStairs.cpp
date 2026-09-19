#include <iostream>
using namespace std;

// Q2. Climbing Stairs.
int climbStairs(int n)
{
    if (n <= 1)
        return 1;
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    return 0;
}
