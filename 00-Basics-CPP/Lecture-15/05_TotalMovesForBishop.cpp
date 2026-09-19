#include <iostream>
#include <cmath>
using namespace std;

// Q5. Total Moves for Bishop!
int solve(int A, int B)
{
    int count = 0;

    count += min(8 - A, 8 - B);
    count += min(8 - A, B - 1);
    count += min(A - 1, B - 1);
    count += min(A - 1, 8 - B);

    return count;
}

int main()
{
    return 0;
}
