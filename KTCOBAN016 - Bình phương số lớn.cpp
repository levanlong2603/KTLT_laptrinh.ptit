#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        char ans[2 * n + 1];
        int k = 0;
        for(int i = 1; i < 2 * n; i++){
            if(i <= n) k += i;
            else k += 2 * n - i;
            ans[2 * n - i] = k % 10 + '0';
            k /= 10;
        }
        for(int i = 1; i < 2 * n; i++){
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
