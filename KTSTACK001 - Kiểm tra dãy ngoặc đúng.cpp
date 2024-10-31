#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> st;
        bool ok = true;
        for(char x : s){
            if(x == '(' || x == '[' || x == '{'){
                st.push(x);
            }
            else {
                if((x == ')' && st.top() == '(') || (x == ']' && st.top() == '[') || (x == '}'&& st.top() == '{')){
                    st.pop();
                }
                else {
                    ok = false;
                    break;
                }
            }
        }
        if(st.empty() && ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
