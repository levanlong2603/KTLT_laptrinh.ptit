#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll n, ll k){
    ll cnt = 0;
    while(n > 0){
        if(n % 2 == 0) cnt++;
        n /= 2;
        if(cnt > k) return false;
    }
    return cnt == k;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll cnt = 0;
        for(ll i = 0; i <= n; i++){
            if(check(i, k)) cnt++;
        }
        cout << cnt << endl;
    }
}
