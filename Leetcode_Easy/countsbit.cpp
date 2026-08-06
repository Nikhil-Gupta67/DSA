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
int main(){
    solution s;
    int n = 5;
    vector<int> result = s.countbits(n);
    for (int i = 0; i <= n; i++){
        cout << result[i] << " ";
    }
    cout << endl; // Output: 0 1 1 2 1 2
    return 0;
}