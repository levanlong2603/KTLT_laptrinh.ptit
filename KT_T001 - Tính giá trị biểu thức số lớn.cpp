#include <bits/stdc++.h>
using namespace std;

#define ll long long

int a[100001];
string s[1005];

void gt(){
    ll m = 1, q, r = 0;
    a[0] = 1;
    for(int i = 1; i <= 1000; i++){
        for(int j = 0; j < m; j++){
            q = a[j]*i*2 + r;
            a[j] = q % 10;
            r = q / 10;
        }
        while(r > 0){
            a[m] = r % 10;
            r /= 10;
            m++;
        }
        for(int j = m - 1; j >= 0; j--){
            s[i] += a[j] + '0';
        }
    }
}

int main(){
    gt();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 0){
            cout << 1 << endl;
        }
        else cout << s[n] << endl;
    }
    return 0;
}
