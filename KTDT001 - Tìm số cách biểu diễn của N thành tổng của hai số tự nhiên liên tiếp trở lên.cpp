#include <iostream>
using namespace std;

#define ll long long

ll cnt(ll n){
    ll cnt = 0;
    for(ll k = 2; n - k*(k-1)/2 > 0; k++){
        if((n - k*(k-1)/2) % k == 0){
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << cnt(n) << endl;
    }
    return 0;
}
