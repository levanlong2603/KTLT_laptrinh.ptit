#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long a, b; cin >> a >> b;
        int x = ceil(1.0*sqrt(a));
        int y = sqrt(b);
        int cnt = 0;
        for(int i = x; i <= y; i++){
            cnt++;
        }
        cout << cnt << endl;
     }
}
