#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Q4. Time Needed to Buy Tickets.
// Method 1:
int timeRequiredToBuy(vector<int> &tickets, int k)
{
    queue<int> q;

    for (int i = 0; i < tickets.size(); i++)
        q.push(i);

    int time = 0;

    while (tickets[k] != 0)
    {
        tickets[q.front()]--;
        if (tickets[q.front()])
            q.push(q.front());
        q.pop();
        time++;
    }

    return time;
}

// Method 2:
int timeRequiredToBuy(vector<int> &tickets, int k)
{
    int n = tickets.size();
    int time = 0;
    for (int i = 0; i <= k; i++)
    {
        time += min(tickets[k], tickets[i]);
    }

    for (int i = k + 1; i < n; i++)
    {
        time += min(tickets[k] - 1, tickets[i]);
    }

    return time;
}

int main()
{
    return 0;
}
