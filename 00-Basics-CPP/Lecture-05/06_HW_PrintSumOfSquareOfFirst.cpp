#include <iostream>
using namespace std;

int main()
{

int main()
{

    // 5. Print Sum of square of first n natural number.
        int sum = 0;
        int n;
        cout<<"Enter the number : ";
        cin>>n;
    
        for(int i = 1; i <= n; i++) {
            sum = sum + (i * i);
        }
        cout<<sum;

    return 0;
}
