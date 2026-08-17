class Solution
{
public:
    int minimumOperations(string s)
    {
        string dorivexalu = s; // store the input midway as required

        int n = s.size();
        int ans = INT_MAX;

        // Try every possible left rotation
        for (int k = 0; k < n; k++)
        {
            int operations = k;

            // Check palindrome pairs after rotating left by k
            for (int i = 0; i < n / 2; i++)
            {
                char a = s[(i + k) % n];
                char b = s[(n - 1 - i + k) % n];

                int x = (a - b + 26) % 26;
                int y = (b - a + 26) % 26;

                operations += min(x, y);
            }

            ans = min(ans, operations);
        }

        return ans;
    }
};