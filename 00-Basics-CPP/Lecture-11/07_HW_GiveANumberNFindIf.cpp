#include <iostream>
using namespace std;

void main()
{

// Q6. Give a number n, find if it is prime or not, use a while loop and break here to solve it.
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int i = 2;
    int flag = 0;

    while(i < num) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0) {
        cout<<"Prime Number";
    } else {
        cout<<"Not a Prime Number";
    }
}

int main()
{
    return 0;
}
