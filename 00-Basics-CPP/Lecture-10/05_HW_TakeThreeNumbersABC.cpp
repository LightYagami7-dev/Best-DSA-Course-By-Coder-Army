#include<iostream>
using namespace std;

int main(){

int main()
{

    // Q4. Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.
        int a, b, c;
        cout<<"Enter three numbers : ";
        cin>>a, b ,c;
    
        if(a > b && a > c) {
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }

    return 0;
}
