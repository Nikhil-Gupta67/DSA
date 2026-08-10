#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high)
        {

            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }

            else if (nums[mid] == 1)
            {
                mid++;
            }

            else
            { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
int main()
{
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    solution.sortColors(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}