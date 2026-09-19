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

    // 4. Map:
        // map<int, int> m;
    
        // m.insert(make_pair(1, 20));
        // m.insert(make_pair(2, 30));
        // m.insert(make_pair(3, 40));
        // m[4] = 50;
    
        // for (auto it = m.begin(); it != m.end(); it++)
        // {
        //     cout << it->first << " " << it->second << endl;
        // }
    
        // m.erase(2);
    
        // Unordered Map:
        unordered_map<int, int> m;
        m.insert(make_pair(1, 20));
        m.insert(make_pair(2, 30));
        m.insert(make_pair(3, 40));
    
        for (auto it = m.begin(); it != m.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }

    return 0;
}
