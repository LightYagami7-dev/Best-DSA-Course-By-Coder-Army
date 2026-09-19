#include <iostream>
using namespace std;

void main()
{

// Q1. Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

    // By using while loop
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int i = 1;

    while (i <= num)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }

    // By using do while loop
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int i = 1;

    do
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= num);

int main()
{
    return 0;
}
