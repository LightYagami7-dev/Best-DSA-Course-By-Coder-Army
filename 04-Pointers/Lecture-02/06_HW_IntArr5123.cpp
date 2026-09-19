#include<iostream>
using namespace std;

int main () {

int main()
{

    // 5. int arr[5] = {1,2,3,4,5};
        // Create a pointer which will store the address of the last element. Then print all the elements from the last index to 0th index with the help of a pointer.
        int arr1[5] = {1,2,3,4,5};
        int *ptr = arr1 + 4;
    
        for(int i = 4; i >= 0; i--)
            cout<<*ptr--<<endl;

    return 0;
}
