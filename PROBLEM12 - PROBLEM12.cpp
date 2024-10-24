#include<bits/stdc++.h>
using namespace std;

void add(string s){
	int n = s.size();
	int a[n];
	for(int i = 0; i < n; i++){
		a[i] = s[i] - '0';
	}
	reverse(a, a + n);
	int r = 1, q;
	for(int i = 0; i < n; i++){
		q = a[i] + r;
		if(q > 9){
			a[i] = q % 10;
			r = 1;
		}
		else {
			a[i] = q;
			r = 0;
			break;
		}
	}
	if(r) cout << r;
	for(int i = n - 1; i >= 0; i--){
		cout << a[i];
	}
}

int main(){
	string s;
	cin >> s;
	add(s);
	return 0;
}
