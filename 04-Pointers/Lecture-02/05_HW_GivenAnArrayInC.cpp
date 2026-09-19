#include<iostream>
using namespace std;

int main () {

int main()
{

    // 4. Given an array in c++,
        // int arr[5] = {1,2,3,4,5};
        // What is the difference between arr and &arr. Try to explore it on your own.
        int arr[5] = {1,2,3,4,5};
        cout<<arr<<endl;
        cout<<&arr<<endl;
    
        cout<<*arr<<endl;
        cout<<*(&arr)<<endl;

    return 0;
}
