#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;

ll C[100][100];
void ktao(){
    for(int i = 0; i <= 50; i++){
        C[i][0] = C[i][i] = 1;
    }
    for(int i = 2; i <= 50; i++){
        for(int j = 1; j <= 50; j++){
            C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ktao();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(n - k < 0) cout << 0 << endl;
        else
            cout << C[n -1][n-k] << endl;
    }
    return 0;
}
