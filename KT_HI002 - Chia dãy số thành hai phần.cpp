#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int ans(vector<int>& A) {
    int N = A.size();
    int total = accumulate(A.begin(), A.end(), 0);
    int target = total / 2;
    
    bitset<100001> dp;
    dp[0] = 1;

    for (int num : A) {
        dp |= dp << num;
    }

    int best = 0;
    for (int i = target; i >= 0; --i) {
        if (dp[i]) {
            best = i;
            break;
        }
    }

    ll sum1 = best;
    ll sum2 = total - best;
    return sum1 * sum2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        cout << ans(A) << endl;
    }
    return 0;
}
