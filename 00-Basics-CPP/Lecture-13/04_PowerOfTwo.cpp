#include<iostream>
#include<limits.h>
using namespace std;

// Q4. Power of Two
class Solution {
public:
    bool isPowerOfTwo(int n) {

        if (n < 1)
            return 0;
        while(n != 1) {
            if(n % 2 == 1)
                return 0;
            n /= 2;
        }
        return 1;
    }
};

int main()
{
    return 0;
}
