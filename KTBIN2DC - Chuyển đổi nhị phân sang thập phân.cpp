#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll Pow(int n){
    ll sum = 1;
    while(n--){
        sum *= 2;
    }
    return sum;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        reverse(s.begin(), s.end());
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ans += (s[i] - '0') * Pow(i);
        }
        cout << ans << endl;
    }
    return 0;
}
