#include <iostream>
using namespace std;

int main()
{
    // if-else

int main()
{

    // 1. Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
        int num1, num2;
        cin >> num1;
        cin >> num2;
    
        if (num1 > num2)
        {
            cout << "1st Number is bigger";
        }
        else
        {
            cout << "2nd Number is bigger";
        }
    
        // 2.Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
        int age;
        cin >> age;
        if (age > 18)
        {
            cout << "Adult";
        }
        else
        {
            cout << "Teenager";
        }

    return 0;
}
