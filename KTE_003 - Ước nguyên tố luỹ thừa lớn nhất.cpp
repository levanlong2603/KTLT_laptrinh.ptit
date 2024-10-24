#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        ll n; 
        cin >> n;
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        else if(n == 2){
            cout << 2 << " " << 1 << endl;
            continue;
        }
        int cnt = 0;
        while(n % 2 == 0){
            cnt++;
            n /= 2;
        }
        int a_max = 0;
        a_max = max(a_max, cnt);
        ll res = 2;
        for(ll i = 3; i <= sqrt(n); i += 2){
            cnt = 0;
            while(n % i == 0){
                cnt++;
                n /= i;
            }
            if(cnt > a_max){
                a_max = cnt;
                res = i;
            }
        }
        if(a_max == 0){
            res = n;
            a_max = 1;
        }
        cout << res << " " << a_max << endl;
    }
    return 0;
}
