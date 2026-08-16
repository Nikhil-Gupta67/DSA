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