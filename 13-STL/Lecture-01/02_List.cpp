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

    // 2. List:
        // list<int> l;
    
        // l.push_back(30);
        // l.push_back(40);
        // l.push_back(50);
    
        // l.push_front(20);
        // l.push_front(15);
    
        // // cout<<l.front()<<" "<<l.back()<<endl;
    
        // for (auto it = l.begin(); it != l.end(); it++)
        // {
        //     cout << *it << " ";
        // }
    
        // cout << endl;
    
        // for (auto it = l.rbegin(); it != l.rend(); it++)
        // {
        //     cout << *it << " ";
        // }

    return 0;
}
