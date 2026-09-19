#include <iostream>
using namespace std;

void printOdd(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    printOdd(n - 2);
    cout << n << endl;
}

void print(int n)
{
    if (n == 10)
    {
        cout << 10 << endl;
        return;
    }
    print(n - 1);
    cout << n << endl;
}

void printTable(int i, int n)
{
    if (i == 11)
    {
        return;
    }
    cout << n << " X " << i << " = " << n * i << endl;
    printTable(i + 1, n);
}

int main()
{

int main()
{

    // Q1. Print all odd numbers from 1 to n using recursion.
        int n = 11;
        if (n % 2 == 0)
            n--;
        printOdd(n);

    return 0;
}
