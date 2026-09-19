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

// Q2. First negative integer in every window of size k.
vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{

    vector<long long> ans;
    queue<long long> q;

    for (int i = 0; i < K - 1; i++)
    {
        if (A[i] < 0)
            q.push(i);
    }

    for (int i = K - 1; i < N; i++)
    {
        if (A[i] < 0)
            q.push(i);
        if (q.empty())
        {
            ans.push_back(0);
        }
        else
        {
            if (q.front() <= i - K)
                q.pop();
            if (q.empty())
                ans.push_back(0);
            else
                ans.push_back(A[q.front()]);
        }
    }

    return ans;
}

int main()
{
    return 0;
}
