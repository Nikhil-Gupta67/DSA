#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    string lexPalindromicPermutation(string s, string target)
    {
        int n = s.size();

        vector<int> cnt(26, 0);
        for (char c : s)
        {
            cnt[c - 'a']++;
        }

        int odd = 0;
        char middle = 0;

        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] % 2)
            {
                odd++;
                middle = char('a' + i);
            }
        }

        if (odd > 1)
        {
            return "";
        }

        vector<int> halfCnt(26);

        for (int i = 0; i < 26; i++)
        {
            halfCnt[i] = cnt[i] / 2;
        }

        int m = n / 2;

        auto makePalindrome = [&](const string &left)
        {
            string right = left;

            reverse(right.begin(), right.end());

            if (n % 2 == 1)
            {
                return left + string(1, middle) + right;
            }

            return left + right;
        };

        string targetHalf = target.substr(0, m);

        for (int i = m - 1; i >= 0; i--)
        {

            vector<int> remaining = halfCnt;
            bool possible = true;

            string left;

            for (int j = 0; j < i; j++)
            {
                int x = targetHalf[j] - 'a';

                if (remaining[x] == 0)
                {
                    possible = false;
                    break;
                }

                left += targetHalf[j];
                remaining[x]--;
            }

            if (!possible)
                continue;

            int targetChar = targetHalf[i] - 'a';

            for (int c = targetChar + 1; c < 26; c++)
            {

                if (remaining[c] == 0)
                    continue;

                string candidate = left;
                candidate += char('a' + c);

                remaining[c]--;

                for (int x = 0; x < 26; x++)
                {
                    candidate += string(remaining[x],
                                        char('a' + x));
                }

                string palindrome = makePalindrome(candidate);

                if (palindrome > target)
                {
                    return palindrome;
                }

                remaining[c]++;
            }
        }
        return "";
    }
};
int main()
{
    Solution sol;
    string s = "aabb";
    string target = "abba";
    string result = sol.lexPalindromicPermutation(s, target);
    if (result.empty())
    {
        cout << "No valid palindromic permutation greater than target." << endl;
    }
    else
    {
        cout << "Lexicographically smallest palindromic permutation greater than target: " << result << endl;
    }
    return 0;
}
