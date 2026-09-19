#include<iostream>
#include<limits.h>
using namespace std;

// Q6. Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return 0;
        
        int num = x, ans = 0, rem;
        while(num != 0) {
            rem = num % 10;
            num /= 10;
            if(ans > INT_MAX / 10){
                return 0;
            }
            ans = ans * 10 + rem;
        }

        if(ans == x)
            return 1;
        return 0;
    }
};

int main()
{
    return 0;
}
