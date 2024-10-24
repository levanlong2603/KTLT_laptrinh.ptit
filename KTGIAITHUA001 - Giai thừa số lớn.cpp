#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e13;

ll a[10001];

void solve(int n){
    ll m = 1, q, r = 0;
    a[0] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < m; j++){
            q = a[j] * i + r;
            a[j] = q % mod;
            r = q / mod;
        }
        while(r > 0){
            a[m] = r % mod;
            m++;
            r /= mod;
        }
    }
    cout << a[m-1];
    for(int j = m - 2; j >= 0; j--){
        cout << setw(13) << setfill('0') << a[j];
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 0 || n == 1) cout << 1 << endl;
        else solve(n);
    }
}
