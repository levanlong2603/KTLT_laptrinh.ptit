#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll f[100];

void fibo(){
    f[1] = f[2] = 1;
    for(int i = 3; i <= 92; i++){
        f[i] = f[i-2] + f[i-1];
    }
}

char find(ll n, ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= f[n-2]){
        return find(n-2, k);
    }
    else return find(n-1, k - f[n-2]);
}

int main(){
    fibo();
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << find(n, k) << endl;
    }
    return 0;
}
