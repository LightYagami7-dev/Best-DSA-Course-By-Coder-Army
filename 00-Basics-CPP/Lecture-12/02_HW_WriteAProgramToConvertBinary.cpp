#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q1. Write a program to convert binary numbers to decimal numbers using a for loop.
        int num;
        cout << "Enter the number : ";
        cin >> num;
    
        int ans = 0, rem = 0, mul = 1;
        for (num = num; num > 0; num /= 10)
        {
            rem = num % 10;
            ans = rem * mul + ans;
            mul *= 2;
        }
    
        cout << ans;

    return 0;
}
