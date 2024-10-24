#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        ll n; 
        cin >> n;
        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        ll ans = 1;
        int x = sqrt(n);
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                ans += i;
                ans += n / i;
            }
        }
        if(x*x == n) ans -= x;
        cout << ans << endl;
    }
    return 0;
}
