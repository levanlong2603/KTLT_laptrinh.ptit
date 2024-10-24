#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        ll n, p; cin >> n >> p;
        ll cnt = 0;
        while(n > 0){
            cnt += n / p;
            n /= p;
        }
        cout << cnt << endl;
    }
    return 0;
}
