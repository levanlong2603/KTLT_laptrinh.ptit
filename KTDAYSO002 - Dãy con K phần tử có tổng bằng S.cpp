#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll n, k, s;

ll z[10000], x[10000];

void nhap(){
    cin >> n >> k >> s;
    for(int i = 0; i < n; i++){
        cin >> z[i];
    }
    sort(z, z  + n);
    memset(x,0,sizeof(x));
}

ll sum, cnt;
void Try(int i){
    for(int j = x[i - 1]+ 1; j <= n - k + i; j++){
        x[i] = j;
        sum += z[x[i] - 1];
        if(i == k){
            if(sum == s){
                cnt++;
            }
        }
        else if(sum < s){
            Try(i+1);
        }
        sum -= z[x[i] - 1];
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        cnt = 0, sum = 0;
        Try(1);
        cout << cnt << endl;
    }
}
