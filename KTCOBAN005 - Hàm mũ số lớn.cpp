#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9+7;

ll modString(string a, ll mod){
    ll res = 0;
    for(char c : a){
        res = (res * 10 + (c - '0')) % mod;
    }
    return res;
}

ll BinPower(ll a, ll n){
    ll res = 1;
    a %= MOD;
    while(n > 0){
        if(n % 2) res = (res * a) % MOD;
        a = (a * a) % MOD;
        n /= 2;
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        ll x = modString(a, MOD);
        ll n = modString(b, MOD-1);
        ll ans = BinPower(x, n);
        cout << ans << endl;
    }
    return 0;
}
