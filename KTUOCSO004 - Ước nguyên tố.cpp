#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        ll n; 
        cin >> n;
        ll m = n;
        ll ans = 1;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                ans *= i;
                while(n % i == 0){
                    n /= i;
                }
            }
        }
        if(n != 1) ans *= n;
        if(ans < m) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
