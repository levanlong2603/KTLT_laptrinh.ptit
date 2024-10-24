#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        ll l ,r; cin >> l >> r;
        if(l % 2 == 0) l++;
        if(r % 2 ==0) r--;
        cout << ((r-l)/2 + 1)*((l + r) /2) << endl;;
    }
    return 0;
}
