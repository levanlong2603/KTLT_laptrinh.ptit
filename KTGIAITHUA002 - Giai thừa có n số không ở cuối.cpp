#include <iostream>
using namespace std;

#define ll long long

ll cnt(ll m){
    ll cnt = 0;
    while(m > 0){
        cnt += m / 5;
        m /= 5;
    }
    return cnt;
}

ll min_m(ll n){
    ll l = 1, r = 5 * n;
    while(l <= r){
        ll mid = l + (r-l)/2;
        if(cnt(mid) < n) l = mid + 1;
        else r = mid - 1;
    }
    return l;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << min_m(n) << endl;
    }
    return 0;
}
