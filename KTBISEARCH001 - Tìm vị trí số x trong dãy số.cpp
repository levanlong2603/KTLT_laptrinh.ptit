#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;


int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    for(int x : b){
        int *it = lower_bound(a, a + n, x);
        if(it == a + n || *it != x){
            cout << 0 << " ";
        }
        else cout << it - a + 1 << " ";
    }
    return 0;
}
