#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q1. How to find the number of Occurance of an element in a vector. You need to use STL here.
    vector<int> ans(5, 1);
    cout << count(ans.begin(), ans.end(), 1) << endl;

int main()
{
    return 0;
}
