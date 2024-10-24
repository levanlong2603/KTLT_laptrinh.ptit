#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string s2; cin >> s2;
        if(s.size() < s2.size()) swap(s,s2);
        int n = s.size();
        int x[n], y[n] = {0}, z[n+1], cnt = 0;
        for(int i = 0; i < n; i++){
            x[i] = s[i] - '0';
        }
        reverse(x, x + n);
        reverse(s2.begin(), s2.end());
        for(int i = 0; i < s2.size(); i++){
            y[i] = s2[i] - '0';
        }
        int r = 0;
        for(int i = 0; i < n; i++){
            int tmp = x[i] + y[i] + r;
            z[cnt++] = tmp % 10;
            r = tmp / 10;
        }
        if(r) z[cnt++] = r;
        for(int i = cnt - 1; i >= 0; i--){
            cout << z[i];
        }
        cout << endl;
    }
    return 0;
}
