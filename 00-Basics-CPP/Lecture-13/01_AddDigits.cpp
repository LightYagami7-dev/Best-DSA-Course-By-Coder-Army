#include<iostream>
#include<limits.h>
using namespace std;

// Q1. Add Digits
class Solution {
public:
    int addDigits(int num) {
        while(num > 9){
        int ans = 0;
            while(num != 0) {
                int rem = num % 10;
                num /= 10;
                ans = ans + rem;
            }
            num = ans;
        }
        return num;
    }
};

int main()
{
    return 0;
}
