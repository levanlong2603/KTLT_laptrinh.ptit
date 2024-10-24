#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e12;

ll a[10005];
void solve(ll x, ll n){
    a[0] = 1;
    ll q, r = 0, m = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < m; j++){
            q = a[j] * x + r;
            a[j] = q % mod;
            r = q / mod;
        }
        while(r > 0){
            a[m] = r % mod;
            r /= mod;
            m++;
        }
    }
    cout << a[m-1];
    for(int i = m - 2; i >= 0; i--){
        cout << setw(12) << setfill('0') << a[i];
    }
    cout << endl;
}


int main(){
    int t; cin >> t;
    while(t--){
        ll a, n;
        cin >> a >> n;
        solve(a, n);
    }
    return 0;
}
