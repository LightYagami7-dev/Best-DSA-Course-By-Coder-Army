#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q3. Find Lower bound and Upper Bound of a given element in a sorted vector. USE STL here to find them.
    cout << lower_bound(ans.begin(), ans.end(), 1) - ans.begin() << endl;
    cout << upper_bound(ans.begin(), ans.end(), 1) - ans.begin() - 1 << endl;

    func(ans);
}

int main()
{
    return 0;
}
