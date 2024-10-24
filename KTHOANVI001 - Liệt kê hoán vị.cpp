#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, a[100];
void init(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        init();
        do{
            for(int i = 1; i <= n; i++){
                cout << a[i];
                if(i < n) cout << " ";
            }
            cout << endl;
        }while(next_permutation(a + 1, a + n + 1));
    }
}
