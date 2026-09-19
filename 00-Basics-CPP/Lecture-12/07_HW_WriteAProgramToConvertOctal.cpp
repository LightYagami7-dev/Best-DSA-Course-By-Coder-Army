#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q6. Write a program to convert Octal numbers to binary numbers.
        int num;
        cout << "Enter the number : ";
        cin >> num;
    
        // Octal to Decimal
        int ans = 0, rem = 0, mul = 1;
        while (num > 0)
        {
            rem = num % 10;
    
            ans = rem * mul + ans;
            // ans *= mul + rem;
    
            num = num / 10;
    
            mul *= 8;
        }
    
        // Decimal to Binary
        int ans1 = 0;
        rem = 0, mul = 1;
        while (ans > 0)
        {
            rem = ans % 2;
            // rem = num & 1;
    
            ans1 = rem * mul + ans1;
            // ans *= mul + rem;
    
            ans = ans / 2;
            // num = num >> 1;
    
            mul *= 10;
        }
        cout << ans1;

    return 0;
}
