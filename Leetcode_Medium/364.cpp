#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumK(vector<int> &nums)
    {
        int n = nums.size();
        int ans = INT_MAX;
        bool hasMisplaced = false;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] != i)
            {
                hasMisplaced = true;
                ans &= nums[i];
            }
        }

        return hasMisplaced ? ans : 0;
    }
};

int main()
{
    Solution sol;

    vector<int> nums1 = {0, 3, 2, 1};
    cout << sol.maximumK(nums1) << "\n"; // 1

    vector<int> nums2 = {0, 1, 3, 2};
    cout << sol.maximumK(nums2) << "\n"; // 2

    vector<int> nums3 = {3, 2, 1, 0};
    cout << sol.maximumK(nums3) << "\n"; // 0

    return 0;
}