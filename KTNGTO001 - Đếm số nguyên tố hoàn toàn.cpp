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

bool check(int n){
    if(a[n] == 1) return false;
    while(n > 0){
        if(a[n % 10] == 1) return false;
        n /= 10;
    }
    return true;
}

int main(){
    sieve();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int cnt = 0;
        for(int i = 0; i <= n; i++){
            if(check(i)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
