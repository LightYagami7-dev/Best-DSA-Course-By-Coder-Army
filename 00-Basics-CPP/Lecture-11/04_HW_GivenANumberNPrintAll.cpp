#include <iostream>
using namespace std;

void main()
{

// Q3. Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
    int num;
    cout << "Enter the number : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            continue;
        }
        else
        {
            cout << i << " ";
        }
    }

int main()
{
    return 0;
}
