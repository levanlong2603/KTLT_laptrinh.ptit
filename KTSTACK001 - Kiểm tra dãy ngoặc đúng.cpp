#include<bits/stdc++.h>
using namespace std ;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        vector<char> v;
        if(s.size() == 0){
            cout << "YES\n";
            continue;
        }
        int ok = 1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                v.push_back(s[i]);
            }
            else {
                if(s[i] == ')' && v[v.size() - 1] == '('){
                    v.pop_back();
                }
                else if(s[i] == ']' && v[v.size() - 1] == '['){
                    v.pop_back();
                }
                else if(s[i] == '}' && v[v.size() - 1] == '{'){
                    v.pop_back();
                }
                else {
                    ok = 0;
                    break;
                }
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}
