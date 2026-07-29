#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0)
            return false;

        long rev = 0;
        int temp = x;

        while(temp)
        {
            rev = rev*10 + temp%10;
            temp /= 10;
        }

        return rev == x;
    }
};
int main()
{
    Solution s;
    int x = 121;
    cout << s.isPalindrome(x) << endl; // Output: 1 (true)
    return 0;
}