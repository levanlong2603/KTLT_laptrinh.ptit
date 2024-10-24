#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e12;


int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        vector<char> v;
        for(int i = 0; i < s.size(); i++){
            auto it = lower_bound(v.begin(), v.end(), s[i]);
            if(it == v.end()){
                v.push_back(s[i]);
            }
            else *it = s[i];
        }
        cout << v.size() << endl;
    }
    return 0;
}
