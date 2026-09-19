#include <iostream>
using namespace std;

int main()
{

int main()
{

    // 7. Print n’th Fibonacci number.
        int last = 0;
        int prev = 1;
        int current, n;
    
        cout << "Enter the n'th number : ";
        cin >> n;
    
        if (n == 1)
        {
            cout << last;
        }
        else if (n == 2)
        {
            cout << prev;
        }
        else
        {
            for (int i = 3; i <= n; i++)
            {
                current = last + prev;
                last = prev;
                prev = current;
            }
        }
    
        cout << current;

    return 0;
}
