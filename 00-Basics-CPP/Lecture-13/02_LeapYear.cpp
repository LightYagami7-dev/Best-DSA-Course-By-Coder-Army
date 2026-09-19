#include<iostream>
#include<limits.h>
using namespace std;

// Q2. Leap Year
class Solution{
public:
    int isLeap(int N){
        //code here
        if(N % 400 == 0) {
            return 1;
        } else if(N % 4 == 0 && N % 100 != 0) {
            return 1;
        } else {
            return 0;
        }
    }
};

int main()
{
    return 0;
}
