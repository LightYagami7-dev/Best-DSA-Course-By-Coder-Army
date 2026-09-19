#include <iostream>
using namespace std;

// Q3. There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
void put(int &a, int &b, int &c)
{
    int d = a;
    int e = b;
    int f = c;
    b = d;
    c = e;
    a = f;
}

int main()
{
    return 0;
}
