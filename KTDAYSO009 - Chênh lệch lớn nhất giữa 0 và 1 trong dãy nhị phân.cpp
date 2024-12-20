#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int sum1 = 0, sum2 = 0;
		for(int i = 0; i < s.size(); i++){
			sum1 += s[i] == '0' ? 1 : -1;
			if(sum1 < 0) sum1 = 0;
			sum2 = max(sum1, sum2);
		}
		if(sum2 == 0) cout << -1 << endl;
		else cout << sum2 << endl;
	}
}

