#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll n){
    ll x = sqrt(n);
    return x * x == n;
}

bool cp(ll n){
    while(n > 0){
        if(check(n % 10) == false) return 0;
        n /= 10;
    }
    return true;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        ll n; 
        cin >> n;
        ll a = ceil(pow(10, n -1));
        ll b = pow(10, n);
        int ok = 1;
        for(ll i = a; i < b; i++){
            if(check(i) && cp(i)){
                cout << i << endl;
                ok = 0;
                break;
            }
        }
        if(ok) cout << -1 << endl;
    }
    return 0;
}
