#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double average(vector<int> &salary)
    {

        int sum = 0;

        int minimum = salary[0];
        int maximum = salary[0];

        for (int i = 0; i < salary.size(); i++)
        {

            sum += salary[i];

            minimum = min(minimum, salary[i]);

            maximum = max(maximum, salary[i]);
        }

        sum = sum - minimum - maximum;

        return (double)sum / (salary.size() - 2);
    }
};