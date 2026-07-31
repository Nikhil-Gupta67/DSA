#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.size() != t.size())
            return false;

        vector<int> count(26, 0);

        for (char c : s)
            count[c - 'a']++;

        for (char c : t)
            count[c - 'a']--;

        for (int x : count)
            if (x != 0)
                return false;

        return true;
    }
};
int main()
{
    Solution s;
    string str1 = "anagram";
    string str2 = "nagaram";
    cout << s.isAnagram(str1, str2) << endl; // Output: 1 (true)
    return 0;
}                                           