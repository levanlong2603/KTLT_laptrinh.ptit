include<bits/stdc++.h>
using namespace std;

#define ll long long

string s;

bool check(int a, int b){
	if(b - a + 1 > 3) return false;
	if(s[a] == '0'){
		if(b - a + 1 == 1) return true;
		return false;
	}

	if(b - a + 1 == 1 || b - a + 1 == 2) return true;

	int x = 100*(s[a] - '0') + 10*(s[a + 1] - '0') + (s[b] - '0');

	if(x >= 0 && x <= 255) return true;
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		int n = s.size();
		if(n < 4 || n > 12){
			cout << 0 << "\n";
			continue;
		}
		int cnt = 0;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				for(int k = j + 1; k < n; k++){
					if(check(0, i) && check(i + 1, j) && check(j + 1, k) && check(k + 1, n-1)){
						cnt++;
					}
				}
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
