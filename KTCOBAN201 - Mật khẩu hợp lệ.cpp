#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

bool check(string s){
    if(s.size() < 8) return false;
    bool digit = false;
    bool upper = false;
    bool lower = false;
    bool symbol = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1]) return false;
        if(isdigit(s[i])) digit = true;
        if(isupper(s[i])) upper = true;
        if(islower(s[i])) lower = true;
        if(!isalpha(s[i]) && !isdigit(s[i])) symbol = true;
    }
    if(digit && upper && lower && symbol) return true;
    return false;
}

int main(){
    freopen("password.in", "r", stdin);
    freopen("res.out", "w", stdout);
    string s;
    while(cin >> s){
        if(check(s)){
            cout << "VALID\n";
        }
        else{
            cout << "INVALID\n";
        }
    }
    return 0;
}
