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

    // 3. Set:
        // set<int> s;
        // // set<int, greater<int>> s;
    
        // s.insert(20);
        // s.insert(30);
        // s.insert(50);
        // s.insert(30);
        // s.insert(40);
    
        // for (auto it = s.begin(); it != s.end(); it++)
        // {
        //     cout << *it << " ";
        // }
    
        // // Searching any element
        // // find() function
        // if (s.find(20) != s.end())
        //     cout << "Present\n";
        // else
        //     cout << "Absent\n";
    
        // // count() function
        // if (s.count(20))
        //     cout << "Present\n";
        // else
        //     cout << "Absent\n";
    
        // // Deleting any element
        // s.erase(40);
    
        // set<Person> s;
        // Person p1, p2;
        // p1.age = 20, p1.name = "Hirdesh";
        // p2.age = 22, p2.name = "Hitesh";
    
        // s.insert(p1);
        // s.insert(p2);
    
        // for (auto it = s.begin(); it != s.end(); it++)
        // {
        //     cout << (*it).age << " "<< (*it).name<<endl;
        // }
    
        // Multiset:
        // Duplicate elements will be present.
        // multiset<int>s;
        // s.insert(20);
        // s.insert(20);
        // s.insert(30);
        // s.insert(40);
        // s.insert(30);
    
        // for (auto it = s.begin(); it != s.end(); it++)
        // {
        //     cout << *it << " ";
        // }
    
        // cout<<endl;
    
        // s.erase(20);
    
        // for (auto it = s.begin(); it != s.end(); it++)
        // {
        //     cout << *it << " ";
        // }
    
        // Unordered set:
        // unordered_set<int>s;
        // s.insert(1);
        // s.insert(2);
        // s.insert(3);
        // s.insert(4);
        // s.insert(5);
        // s.insert(7);
        // s.insert(6);
    
        // for (auto it = s.begin(); it != s.end(); it++)
        // {
        //     cout << *it << " ";
        // }

    return 0;
}
