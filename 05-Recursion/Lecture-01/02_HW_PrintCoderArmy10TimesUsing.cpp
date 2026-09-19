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

    // Q1. Print “Coder Army” 10 times using recursion.
        int n = 10;
        CoderArmy(10);

    return 0;
}
