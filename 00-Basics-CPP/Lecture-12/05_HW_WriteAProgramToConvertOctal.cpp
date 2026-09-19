#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q4. Write a program to convert Octal numbers to decimal numbers.
        int num;
        cout << "Enter the number : ";
        cin >> num;
    
        int ans = 0, rem = 0, mul = 1;
        while (num > 0)
        {
            rem = num % 10;
    
            ans = rem * mul + ans;
            // ans *= mul + rem;
    
            num = num / 10;
    
            mul *= 8;
        }
        cout << ans;

    return 0;
}
