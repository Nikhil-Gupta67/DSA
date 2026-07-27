#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for(int num : nums)
        {
            if(st.count(num))
                return true;

            st.insert(num);
        }

        return false;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    bool result = s.containsDuplicate(nums);
    cout << "Contains duplicate: " << (result ? "true" : "false") << endl;
    return 0;
}