#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q2. Calculate the average of elements in an array of size 18.
        int arr[18];
    
        cout<<"Enter 20 Elements : "<<endl;
        for(int i = 0; i < 18; i++) {
            cin>>arr[i];
        }
    
        cout<<endl;
    
        int sum = 0;
        for(int i = 0; i < 18; i++) {
            sum += arr[i];
        }
    
        cout<<sum / 18<<" ";

    return 0;
}
