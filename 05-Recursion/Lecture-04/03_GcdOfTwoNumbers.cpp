#include <iostream>
using namespace std;

// Q3. GCD of two numbers.
int gcd(int A, int B)
{
    // code here
    if (B == 0)
        return A;
    return gcd(B, A % B);
}


int main() {}
