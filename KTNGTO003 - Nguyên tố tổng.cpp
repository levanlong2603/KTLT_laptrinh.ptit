#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

bool nt(ll n){
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n <= 4) cout << 5 << endl;
        else {
            if(n % 2 == 0) n++;
            while(n > 0){
                if(nt(n-2) && nt(n)){
                    cout << n << endl;
                    break;
                }
                n += 2;
            }
        }
    }
    return 0;
}
