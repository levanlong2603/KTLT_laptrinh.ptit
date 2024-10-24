#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e12;

ll a[1000];

void solve(int n, int k){
    ll m = 1, q , r = 0;
    a[0] = 1;
    for(int i = n - k + 1; i <= n; i++){
        for(int j = 0; j < m; j++){
            q = a[j] * i + r;
            a[j] = q % mod;
            r = q / mod;
        }
        while(r > 0){
            a[m] = r % mod;
            m ++;
            r /= mod;
        }
    }
    cout << a[m-1];
    for(int j = m -2; j >= 0; j--){
        cout << setw(12) << setfill('0') << a[j];
    }
    cout << endl;   
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
}
