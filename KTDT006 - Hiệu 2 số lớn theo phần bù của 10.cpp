#include<bits/stdc++.h>
using namespace std;

void sub(string a, string b){
	int n1 = a.size();
	int n2 = b.size();
	int n = 0;
	int x[n1], y[n1], z[n1];
	memset(z, 0, sizeof(z));
	memset(y, 0, sizeof(y));
	for(int i = 0; i < n1; i++){
		x[i] = a[i] - '0';
	}
	for(int i = 0; i < n2; i++){
		y[i] = b[i] - '0';
	}
	reverse(x, x + n1);
	reverse(y, y + n2);
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int tmp = x[i] - y[i] - nho;
		if(tmp < 0){
			z[n++] = 10 + tmp;
			nho = 1;
		}
		else {
			z[n++] = tmp;
			nho = 0;
		}
	}
	int ok = 0;
	for(int i = n - 1; i >= 0; i--){
		if(ok == 0 && z[i] != 0){
			ok = 1;
		}
		if(ok) cout << z[i];
	}
}

void sub2(string a, string b){
	int n1 = a.size();
	int n2 = b.size();
	int n = 0;
	int x[n1], y[n1], z[n1];
	memset(z, 0, sizeof(z));
	memset(y, 0, sizeof(y));
	for(int i = 0; i < n1; i++){
		x[i] = a[i] - '0';
	}
	for(int i = 0; i < n2; i++){
		y[i] = b[i] - '0';
	}
	reverse(x, x + n1);
	reverse(y, y + n2);
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int tmp = x[i] - y[i] - nho;
		if(tmp < 0){
			z[n++] = 10 + tmp;
			nho = 1;
		}
		else {
			z[n++] = tmp;
			nho = 0;
		}
	}
	for(int i = n - 1; i >= 0; i--){
		cout << z[i];
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		if(a == b) {
			cout << "";
			continue;
		}
		else if(a.size() > b.size() || (a.size() == b.size() && a > b)){
			sub(a, b);
		}
		else if(a.size() == b.size() && a < b){
			sub2(b,a);
		}
		else sub(b, a);
		cout << endl;
	}
	return 0;
}
