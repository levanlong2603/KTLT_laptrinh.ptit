#include <bits/stdc++.h>
using namespace std;

#define ll long long
const long long MOD = 1e9+7;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll value;
		priority_queue<ll, vector<ll>,greater<ll>>a;
		for(int i = 1; i<= n; i++){
			cin >> value;
			a.push(value);
		}
		ll res = 0;
		while(a.size()>1){
			ll x = a.top(); a.pop();
			ll y = a.top(); a.pop();
			ll temp = (x+y)%MOD;
			res += temp;
			res%=MOD;
			a.push(temp);
		}
		cout << res << endl;
	}
	return 0;
}
