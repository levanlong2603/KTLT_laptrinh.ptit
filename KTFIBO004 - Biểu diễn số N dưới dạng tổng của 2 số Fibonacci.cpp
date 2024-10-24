#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll f[100];

void fibo(){
    f[1] = f[2] = 1;
    for(int i = 3; i <= 92; i++){
        f[i] = f[i-1] + f[i-2];
    }
}

int main(){
    fibo();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ok = 1;
        for(int i = 0; i <= 92; i++){
            for(int j = 92; j >= 0; j--){
                if(f[j] == n - f[i]){
                    cout << f[i] << " " << f[j] << endl;
                    ok = 0;
                    break;
                }
            }
            if(ok == 0){
                break;
            }
        }
        if(ok) cout << -1 << endl;
    }
    return 0;
}
