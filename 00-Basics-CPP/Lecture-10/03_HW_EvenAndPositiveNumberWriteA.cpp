#include<iostream>
using namespace std;

int main(){

int main()
{

    // Q2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.
    
        int num;
        cout<<"Enter the Number : ";
        cin>>num;
    
        if(num % 2 == 0 && num > 0) {
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }

    return 0;
}
