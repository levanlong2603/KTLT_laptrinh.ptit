#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;

ll C[100][100];
void tohop(){
    memset(C, 0, sizeof(C));
    for(int i = 0; i <= 50; i++){
        C[i][0] = C[i][i] = 1;
    }
    for(int i = 1; i <= 50; i++){
        for(int j = 1; j <= 50; j++){
            C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
}

int main(){
    int t;
    cin >> t;
    tohop();
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << C[n-1][k - 1] << endl;
    }
    return 0;
}
