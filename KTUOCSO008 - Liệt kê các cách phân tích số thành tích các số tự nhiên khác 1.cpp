#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> cnt;
vector<int> v;

void Try(int n, int start){
	if(n == 1){
		if(v.size() > 1)
			cnt.push_back(v);
		return;
	}
	
	for(int i = start; i <= n; i++){
		if(n % i == 0){
			v.push_back(i);
			Try(n/i, i);
			v.pop_back();
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(n, 2);
		cout << cnt.size() << endl;;
		for(auto v : cnt){
			for(int i = 0; i < v.size(); i++){
				cout << v[i] << ' ';
			}
			cout << endl;
		}
		cnt.clear();
	}
}
