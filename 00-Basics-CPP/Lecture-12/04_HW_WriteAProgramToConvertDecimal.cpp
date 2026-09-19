#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q3. Write a program to convert decimal numbers to Octal numbers.
        int num;
        cout << "Enter the number : ";
        cin >> num;
    
        int ans = 0, rem = 0, mul = 1;
        while (num > 0)
        {
            rem = num % 8;
    
            ans = rem * mul + ans;
    
            num = num / 8;
    
            mul *= 10;
        }
        cout << ans;

    return 0;
}
