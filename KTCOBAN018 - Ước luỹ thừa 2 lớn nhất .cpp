#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        ll n, cnt = 0;
        cin >> n;
        while(n > 0){
            cnt += n / 2;
            n /= 2;
        }
        cout << cnt << endl;
    }
    return 0;
}
