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
        
        if(n <= 3){
            cout << 4 << endl;
            continue;
        }
        int ok = 1;
        for(int i = 3; i <= 92; i++){
            if(f[i] == n + 1){
                cout << n + 2 << endl;
                break;
            }
            else if(f[i] > n + 1){
                cout << n + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
