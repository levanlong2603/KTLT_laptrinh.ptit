#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> prime(500001, 0);
void sieve(){
    ll n = 500001;
    for(ll i = 2; i <= n; i++){
        if(prime[i] == 0){
            for(ll j = i * 2; j <= n; j += i){
                prime[j] = i; 
            }
        }
    }
}

int main(){
    sieve();
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll sum = 0;
        for(ll i = 2; i <= n; i++){
            if(prime[i] == 0) sum += i;
            else sum += prime[i];
        }
        cout << sum << endl;
    }
    return 0;
}
