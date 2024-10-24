#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll cata[40];

ll catalan(){
    cata[0] = 1;
    for(int i = 1; i <= 31; i++){
        cata[i] = 0;
        for(int j = 0; j < i; j++){
            cata[i] += cata[j] * cata[i-j-1];
        }
    }
}

int main(){
    catalan();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << cata[n] << endl;
    }
    return 0;
}
