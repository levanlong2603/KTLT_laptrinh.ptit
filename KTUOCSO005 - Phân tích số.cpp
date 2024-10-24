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
            cout << 1 << endl;
            cout << 2 << " " << 1 << endl;
            continue;
        }
        map<ll,ll> mp;
        while(n % 2 == 0){
            mp[2]++;
            n /= 2;
        }
        for(int i = 3; i <= sqrt(n); i += 2){
            while(n % i == 0){
                mp[i]++;
                n /= i;
            }
        }
        if(n != 1) mp[n]++;
        cout << mp.size() << endl;
        for(auto x : mp){
            cout << x.first << " "  << x.second << endl;
        }
    }
    return 0;
}
