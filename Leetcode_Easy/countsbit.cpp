#include <bits/stdc++.h>
using namespace std;
class solution {
    public:
    vector<int>countbits(int n){
        vector<int> ans(n + 1);
        for (int i = 1; i <= n; i++){
            ans[i] = ans[i >> 1] + (i & 1);
        }
        return ans;
    }
};