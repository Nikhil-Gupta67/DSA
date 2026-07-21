#include<iostream>
#include<string>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {

        int left = 0;
        int right = s.size() - 1;

        while (left < right)
        {

            // Skip non-alphanumeric characters
            while (left < right && !isalnum(s[left]))
            {
                left++;
            }

            while (left < right && !isalnum(s[right]))
            {
                right--;
            }

            // Compare characters (case-insensitive)
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
int main()
{
    Solution s;
    string input    = "A man, a plan, a canal: Panama";
    bool result     = s.isPalindrome(input);
    cout << (result ? "true" : "false") << endl;
    return 0;
}