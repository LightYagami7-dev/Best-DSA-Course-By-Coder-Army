#include<iostream>
#include<limits.h>
using namespace std;

// Q7. Complement of Base 10 Integer
class Solution {
public:
    int mySqrt(int x) {
        int i = 0;
        while(i * i <= x){
            if(i * i >= INT_MAX) {
                return i - 1;
                break;
            }
            i++;
        }
        return i - 1;
    }
};

int main()
{
    return 0;
}
