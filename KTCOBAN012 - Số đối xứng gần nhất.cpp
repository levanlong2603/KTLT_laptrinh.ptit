#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(string s){
    int left = 0, right = s.size() - 1;
    while(left <= right){
        if(s[left] != s[right]) return true;
        left++; right--;
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(check(to_string(n)) == false){
            cout << n << endl;
            continue;
        }
        ll ans1 = n - 1, ans2 = n + 1;
        while(check(to_string(abs(ans1)))) ans1--;
        while(check(to_string(ans2))) ans2++;
        if(abs(n - ans1) == abs(n - ans2)){
            cout << ans1 << " " << ans2 << endl;
        }
        else if(abs(n - ans1) < abs(n - ans2)) cout << ans1 << endl;
        else cout << ans2 << endl;
    }
    return 0;
}
