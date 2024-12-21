#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;

int ans(int a[], int n){
	int x = 0;
	for(int i = 0; i < n; i++){
		x += a[i];
	}
	int y = x / 2;
	bitset<100001> dp;
	dp[0] = 1;
	for(int i = 0; i < n; i++){
		dp |= dp << a[i];
	}
	int best = 0;
	for(int i = y; i >= 0; i--){
		if(dp[i]){
			best = i;
			break;
		}
	}
	int sum1 = best;
	int sum2 = x - best;
	return sum1 * sum2;
}

int main(){
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		cout << ans(a, n) << endl;
	}
}
