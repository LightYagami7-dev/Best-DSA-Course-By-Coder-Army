#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q3. Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.
        int size;
        cout<<"Enter the size of the array : ";
        cin>>size;
    
        int arr[size];
    
        cout<<"Enter the Elements : "<<endl;
        for(int i = 0; i < size; i++) {
            cin>>arr[i];
        }
    
        int num;
        cout<<"Enter the element you want to search : ";
        cin>>num;
    
        int flag = 0;
        int loc = 0;
    
        for(int i = 0; i < size; i++) {
            if(num == arr[i]) {
                loc = i;
                flag = 1;
                break;
            }
        }
    
        if(flag == 1)
            cout<<loc<<endl;
        else
            cout<<-1;

    return 0;
}
