#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll cnt = 0;
        for(ll i = 5; i < n; i*=5){
            cnt += n/i;
        }
        cout << cnt << endl;
    }
    return 0;
}
