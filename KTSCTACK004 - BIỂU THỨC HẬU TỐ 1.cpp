#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

int ut(char c){
	if(c == '^') return 3;
	else if(c == '*' || c == '/') return 2;
	else if(c == '+' || c == '-') return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		string res = "";
		for(int i = 0; i < s.size(); i++){
			if(isalpha(s[i])){
				res += s[i];
			}
			else if(s[i] == '('){
				st.push(s[i]);
			}
			else if(s[i] == ')'){
				while(st.top() != '('){
					res += st.top();
					st.pop();
				}
				st.pop();
			}
			else {
				while(!st.empty() && (ut(st.top()) >= ut(s[i]))){
					res += st.top();
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			res += st.top();
			st.pop();
		}
		cout << res << endl;
	}
	return 0;
}
