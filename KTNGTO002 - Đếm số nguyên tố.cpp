#include <bits/stdc++.h>
using namespace std;

#define ll long long

int a[1000001] = {0};
void sieve(){
    a[0] = a[1] = 1;
    for(int i = 2; i <= 1000; i++){
        if(a[i] == 0){
            for(int j = i * i; j <= 1000000; j+= i){
                a[j] = 1;
            }
        }
    }
}

int main(){
    sieve();
    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        if(l > r) swap(l,r);
        int cnt = 0;
        for(int i = l; i <= r; i++){
            if(a[i] == 0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
