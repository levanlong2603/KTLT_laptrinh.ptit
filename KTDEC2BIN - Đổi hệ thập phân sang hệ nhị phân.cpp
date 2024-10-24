#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        ll n; 
        cin >> n;
        if(n == 0){
            cout << 0 << endl; 
            continue;
        }
        vector<int> v;
        while(n > 0){
            v.push_back(n % 2);
            n /= 2;
        }
        int x = v.size();
        for(int i = x - 1; i >= 0; i--){
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}
