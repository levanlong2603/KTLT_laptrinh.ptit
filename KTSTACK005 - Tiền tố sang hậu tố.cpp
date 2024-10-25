#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> st;
		for(int i = s.size() - 1; i >= 0; i--){
			if(isalpha(s[i])){
				st.push(string(1,s[i]));
			}
			else{
				string op1 = st.top(); st.pop();
				string op2 = st.top(); st.pop();
				string tmp = op1 + op2 + s[i];
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
	return 0;
}
