#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q1. Take 20 elements from user input and find its sum with the help of an array.
        int arr[20];
    
        cout<<"Enter 20 Elements : "<<endl;
        for(int i = 0; i < 20; i++) {
            cin>>arr[i];
        }
    
        cout<<endl;
    
        int sum = 0;
        for(int i = 0; i < 20; i++) {
            sum += arr[i];
        }
    
        cout<<sum<<" ";

    return 0;
}
