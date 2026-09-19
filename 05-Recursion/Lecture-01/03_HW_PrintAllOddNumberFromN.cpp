#include <iostream>
using namespace std;

void CoderArmy(int n)
{
    if (n == 0)
        return;
    cout<<"Coder Army\n";
    CoderArmy(n - 1);
}

void printOdd(int n){
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<" ";
    printOdd(n - 2);
}

void Print(int i, int n){
    if(i == n){
        cout<<i<<endl;
        return;
    }
    cout<<i<<endl;
    Print(i + 1, n);
}

int main()
{

int main()
{

    // Q2. Print all odd number from n to 1 using recursion.
        int n = 9;
        printOdd(n);

    return 0;
}
