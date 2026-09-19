#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q5. Write a program to convert binary to Octal numbers.
        int num;
        cout << "Enter the number : ";
        cin >> num;
    
        // Binary to Decimal
        int ans = 0, rem = 0, mul = 1;
        while (num > 0)
        {
            rem = num % 10;
    
            ans = rem * mul + ans;
            // ans *= mul + rem;
    
            num = num / 10;
    
            mul *= 2;
        }
    
        // Decimal to Octal
        int ans1 = 0;
        rem = 0, mul = 1;
        while (ans > 0)
        {
            rem = ans % 8;
    
            ans1 = rem * mul + ans1;
    
            ans = ans / 8;
    
            mul *= 10;
        }
        cout << ans1;

    return 0;
}
