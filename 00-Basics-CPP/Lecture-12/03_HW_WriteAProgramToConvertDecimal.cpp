#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q2. Write a program to convert decimal numbers to binary numbers using a for loop.
        int num;
        cout << "Enter the number : ";
        cin >> num;
    
        int ans = 0, rem = 0, mul = 1;
        for (num = num; num > 0; num /= 2)
        {
            rem = num % 2;
            ans = rem * mul + ans;
            mul *= 10;
        }
    
        cout << ans;

    return 0;
}
