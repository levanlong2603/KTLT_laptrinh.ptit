#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        float n ,x;
        cin >> n >> x;
        float s = 0;
        float res = 1;
        for(float k = 1; k <= n; k++){
            res *= k;
            s += pow(x, k) / res;
        }
        cout << fixed << setprecision(3) << s << endl;
    }
    return 0;
}
