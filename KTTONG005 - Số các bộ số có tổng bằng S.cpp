#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int k , s;
        cin >> k >> s;
        if(3*k == s){
            cout << 1 << endl;
            continue;
        }
        ll cnt = 0;
        for(int i = 0; i <= k; i++){
            for(int j = 0; j <= min(k, s-i); j++){
                if(s-j-i <= k) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
