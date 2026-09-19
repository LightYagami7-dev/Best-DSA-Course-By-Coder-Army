#include <iostream>
using namespace std;

// Q3. Write a recursive function to rotate elements in an array to the right by 1 position.
void rotate(int arr[], int index, int lastNum){
    if(index == 0){
        arr[index] = lastNum;
        return;
    }

    arr[index + 1] = arr[index];
    rotate(arr, index - 1, lastNum);
}

int main() {}
