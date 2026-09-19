#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q2. Longest K unique characters substring.
int longestKSubstr(string s, int k)
{
    // Initialize pointers, answer variable, and character count
    int i = 0, j = 0, ans = 0;
    int size = 0;
    vector<int> mp(26, 0); // Array to store the count of each character
    int n = s.length();    // Length of the input string
    // Sliding window approach
    while (i < n && j < n)
    {
        // If the number of distinct characters exceeds k
        if (size > k)
        {
            mp[s[i] - 'a']--; // Decrease the count of the character at the beginning of the window
            if (mp[s[i] - 'a'] == 0)
            {
                size--; // If count becomes 0, reduce the size of distinct characters
            }
            i++; // Move the window forward
        }
        else
        {
            // If the number of distinct characters is less than or equal to k
            if (mp[s[j] - 'a'] == 0)
            {
                size++; // Increase the size of distinct characters
            }
            mp[s[j] - 'a']++; // Increase the count of the character at the end of the window
            j++;              // Move the window forward
            // If the size of distinct characters becomes equal to k, update the answer
            if (size == k)
            {
                ans = max(ans, j - i);
            }
        }
    }
    // If no substring with k distinct characters is found, return -1
    if (ans == 0)
    {
        return -1;
    }
    else
    {
        return ans; // Return the length of the longest substring with k distinct characters
    }
}

int main() {}
