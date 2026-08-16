#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int elevatorRequests(int n, vector<int> &requests)
    {
        int current = 0;
        int totalTime = 0;

        for (int floor : requests)
        {
            totalTime += abs(current - floor);
            current = floor;
        }

        return totalTime;
    }
};
int main(){
    Solution sol;
    vector<int> requests = {2, 1, 3};
    int result = sol.elevatorRequests(4, requests);
    cout << result << endl;
    return 0;
}