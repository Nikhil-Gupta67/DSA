#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i = digits.size()-1; i >= 0; i--)
        {
            if(digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(),1);

        return digits;
    }
};
int main()
{
    Solution s;
    vector<int> digits = {9, 9, 9};
    vector<int> result = s.plusOne(digits);
    cout << "The result after adding one is: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}