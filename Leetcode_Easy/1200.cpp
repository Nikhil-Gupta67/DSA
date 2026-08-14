#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Find minimum difference
        int minDiff = INT_MAX;

        for(int i = 1; i < arr.size(); i++) {
            int diff = arr[i] - arr[i - 1];

            minDiff = min(minDiff, diff);
        }

        // Step 3: Find all pairs with minimum difference
        vector<vector<int>> answer;

        for(int i = 1; i < arr.size(); i++) {

            int diff = arr[i] - arr[i - 1];

            if(diff == minDiff) {
                answer.push_back({arr[i - 1], arr[i]});
            }
        }

        return answer;
    }
};