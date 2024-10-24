#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long

int main(){
    int t; cin >> t;
    while(t--){
        ll n, l; cin >> n >> l; 
        ll sum = n * l + n * (n - 1) / 2;
        ll sum2 = 0;
        for(ll i = 0; i < n - 1; i++){
            ll x; cin >> x;
            sum2 += x;
        }
        cout << sum - sum2 << endl;
    }
    return 0;
}
