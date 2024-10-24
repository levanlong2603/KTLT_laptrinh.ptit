#include<bits/stdc++.h>
using namespace std ;

#define ll long long

ll nt(ll n){
    ll ans;
    if(n == 2) return n;
    ans = 2;
    while(n % 2 == 0){
        n /= 2;
    } 
    for(int i = 3; i <= sqrt(n); i += 2){
        while(n % i == 0){
            ans = i;
            n /= i;
        }
    }
    if(n > 1) ans = n;
    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << nt(n) << endl;
    }
    return 0;
}
