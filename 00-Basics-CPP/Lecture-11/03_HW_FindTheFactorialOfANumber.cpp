#include <iostream>
using namespace std;

void main()
{

// Q2. Find the factorial of a number n using a while loop and do a while loop.

    // By using while loop
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int fact = 1;
    while (num > 1)
    {
        fact *= num;
        num--;
    }

    // By using do while loop
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int fact = 1;
    do
    {
        fact *= num;
        num--;
    } while (num > 1);

int main()
{
    return 0;
}
