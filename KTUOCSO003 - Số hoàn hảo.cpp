#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll n){
    ll sum = 1;
    ll x = sqrt(n);
    for(int i = 2; i <= x; i++){
        if(n % i == 0){
            sum += i;
            sum += n/i;
        }
    }
    if(x * x == n) sum -= x;
    return sum == n;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(check(n)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
