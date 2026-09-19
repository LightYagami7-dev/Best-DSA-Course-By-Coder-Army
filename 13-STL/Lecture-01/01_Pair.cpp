#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <climits>
using namespace std;

class Person
{
public:
    int age;
    string name;

    bool operator<(const Person &other) const
    {
        return age < other.age;
    }
};

int main()
{

int main()
{

    // 1. Pair:
        // pair<string, int> p;
    
        // Methods of Pair Creation
        // Method 1:
        // p = make_pair("rohit", 30);
        // cout<<p.first<<" "<<p.second<<endl;
    
        // Method 2:
        // p.first = "Rohit";
        // p.second = 30;
        // cout<<p.first<<" "<<p.second<<endl;
    
        // pair<string, pair<int, int>> p;
    
        // Method 1:
        // p.first = "Rohit";
        // p.second.first = 30;
        // p.second.second = 10;
    
        // Method 2:
        // p = make_pair("Rohit", make_pair(30, 10));

    return 0;
}
