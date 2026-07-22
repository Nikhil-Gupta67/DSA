#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        if (nums.size() == 0)
            return 0;

        int i = 0;

        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};
int main()
{
    Solution s;
    vector<int> input = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int result        = s.removeDuplicates(input);
    cout << "Length of array after removing duplicates: " << result << endl;
    cout << "Modified array: ";
    for (int i = 0; i < result; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
    return 0;
}