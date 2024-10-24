#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll sum(ll n){
    ll sum = 1;
    int x = sqrt(n);
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            sum += n/i;
        }
    }
    if(x*x == n) sum -= x;
    return sum;
}

bool check(ll a, ll b){
    return sum(a) == b;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        if(check(a, b) && check(b, a)){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}
