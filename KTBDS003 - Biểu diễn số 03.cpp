#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

long long C[2005][1001];

long long cnt(int n, int k) {
    memset(C, 0, sizeof(C));
    for (int i = 0; i <= n; i++) {
        C[i][0] = 1; // C(n, 0) = 1
        C[i][i] = 1; // C(n, n) = 1
    }

    // Tính toán tổ hợp
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= min(i, k); j++) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }

    return C[n][k];
}

int main() {
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        cout << cnt(n - 1, k - 1) << endl;
    }
    return 0;
}
