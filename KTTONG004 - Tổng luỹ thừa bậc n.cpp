#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int m, n;
        cin >> m >> n;
        
        vector<int> a;
        for (int i = 1; pow(i, n) <= m; ++i) {
            a.push_back(pow(i, n));
        }
        
        vector<int> dp(m + 1, 0);
        dp[0] = 1;
        
        for (int x : a) {
            for (int j = m; j >= x; --j) {
                dp[j] += dp[j - x];
            }
        }
        
        cout << dp[m] << endl;
    }
    return 0;
}
