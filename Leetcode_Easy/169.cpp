#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {

        int count = 0;
        int candidate = 0;

        for (int num : nums)
        {
            if (count == 0)
                candidate = num;

            if (candidate == num)
                count++;
            else
                count--;
        }

        return candidate;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 2, 3};
    int result = s.majorityElement(nums);
    cout << "The majority element is: " << result << endl;
    return 0;
}