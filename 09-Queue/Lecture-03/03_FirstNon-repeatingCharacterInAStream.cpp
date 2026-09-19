#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void display(queue<int> q)
{
    while (q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

// Q3. First non-repeating character in a stream of characters.
string solve(string A)
{
    string B = "";
    vector<int> repeated(26, 0);
    queue<char> q;

    for (int i = 0; i < A.size(); i++)
    {
        if (repeated[A[i] - 'a'] >= 1)
        {
            repeated[A[i] - 'a']++;
            while (!q.empty() && repeated[q.front() - 'a'] > 1)
                q.pop();
            if (q.empty())
                B += '#';
            else
                B += q.front();
        }
        else
        {
            repeated[A[i] - 'a']++;
            q.push(A[i]);
            while (repeated[q.front() - 'a'] > 1)
                q.pop();
            B += q.front();
        }
    }
    return B;
}

int main() {}
