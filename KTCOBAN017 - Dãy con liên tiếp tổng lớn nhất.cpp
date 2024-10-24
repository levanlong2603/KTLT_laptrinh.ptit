#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        ll sum1 = 0, sum2 = -1e18;
        for(int x : a){
            sum1 += x;
            sum2 = max(sum2, sum1);
            if(sum1 < 0) sum1 = 0;
        }
        cout << sum2 << endl;
    }
}
