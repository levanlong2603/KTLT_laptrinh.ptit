#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int p, n, s;
int nt[1005], z[100], x[100];
int cnt = 0, ok;
void ktao(){
	memset(nt, 1, sizeof(nt));
	nt[0] = nt[1] = 0;
	for(int i = 2; i <= sqrt(1000); i++){
		if(nt[i]){
			for(int j = i*i; j <= 1000; j += i){
				nt[j] = 0;
			}
		}
	}
	for(int i = p + 1; i <= s; i++){
		if(nt[i]){
			z[cnt++] = i;
		}
	}
}

void kq(){
	for(int i = 1; i <= n; i++){
		cout << z[x[i]-1] << " ";
	}
	cout << endl;
}
int sum = 0;
void Try(int i){
	for(int j = x[i-1] + 1; j <= cnt - n + i; j++){
		x[i] = j;
		sum += z[x[i] - 1];
		if(i == n){
			if(sum == s){
				ok = 0;
				kq();
			}
		}
		else if(sum < s)  Try(i + 1);
		sum -= z[x[i] - 1];
	}
}

int main(){
	cin >> p >> n >> s;
	ktao();
	ok = 1;
	Try(1);
	if(ok) cout << -1;
}
