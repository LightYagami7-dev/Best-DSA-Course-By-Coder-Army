#include<iostream>
#include<limits.h>
using namespace std;

// Q5. Sqrt(x)
class Solution {
public:
    int mySqrt(int x) {
        long i;
        for(i = 0; i * i <= INT_MAX; i++){
            if(i * i == x) {
                return i;
            }
            else if(i * i > x){
                return i - 1;
            }
        }
        return (int)i - 1;
    }
};

int main()
{
    return 0;
}
