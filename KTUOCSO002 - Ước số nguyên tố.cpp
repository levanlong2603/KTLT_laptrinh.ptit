#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        ll n; 
        cin >> n;
        ll ans = 0;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                ans++;
                while(n % i == 0){
                    n /= i;
                }
            }
        }
        if(n != 1) ans++;
        cout << ans << endl;
    }
    return 0;
}
