#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int ans;
        if(s[0] == '-') ans = s.size()-1;
        else ans = s.size();
        cout << ans << endl;
    }
    return 0;
}
