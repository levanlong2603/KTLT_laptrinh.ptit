#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        map<int,int> mp;
        for(int &x : a){
            cin >> x; 
            mp[x]++;
        }
        sort(a, a + n);
        ll ans = 1;
        for(auto x : mp){
            ans *= (x.second + 1);
        }
        cout << ans - 1 << " [";

        for(int i = 0; i < n; i++){
            cout << a[i];
            if(i < n - 1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}
