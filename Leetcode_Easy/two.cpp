#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        map<int, int> mapp;
        int n = nums.size();
        for (int i = 0; i < n;i++){
            int num = nums[i];
            int moreNeeded = target - num;
            if(mapp.find(moreNeeded)!=mapp.end()){
                return {mapp[moreNeeded], i};
            }
            mapp[num] = i;
        }
        return {-1, -1};
    }
};
int main(){
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}