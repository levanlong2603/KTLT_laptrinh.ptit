#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		string s; cin >> s;
		ll a = 	stoul(s, nullptr, 2);
		ll b = (a + k + 1) % (1 << n);

		bitset<50> res(b);

		cout << res.to_string().substr(50 - n) << endl;
	}
	return 0;
}
