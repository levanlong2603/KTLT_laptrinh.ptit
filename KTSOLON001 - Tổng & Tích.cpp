#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9 + 7;

string Add(string a, string b){
	string res = "";
	int r = 0, q;
	int n = max(a.size(), b.size());
	while(a.size() < n) a = "0" + a;
	while(b.size() < n) b = "0" + b;
	for(int i = n - 1; i >= 0; i--){
		q = (a[i] - '0') + (b[i] - '0') + r;
		res = char(q % 10 + '0') + res;
		r = q / 10;
	}
	if(r == 1) res = "1" + res;
	return res;
}


string Mul(string a, string b){
	if(a == "0" || b == "0") return "0";
	string res(a.size() + b.size(), '0');
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for(int i = 0; i < b.size(); i++){
		int r = 0, q;
		for(int j = 0; j < a.size(); j++){
			q = (a[j] - '0')*(b[i] - '0') + r + (res[i+j] - '0');
			res[i+j] = q % 10 + '0';
			r = q / 10;
		}
		if(r > 0){
			res[i+ a.size()] = r + '0';
		}
	}
	while(res.back() == '0'){
		res.pop_back();
	}
	reverse(res.begin(), res.end());
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		char dau;
		cin >> a >> dau >> b;
		if(dau == '+'){
			cout << Add(a, b) << endl;
		}
		else cout << Mul(a, b) << endl;
	}
}
