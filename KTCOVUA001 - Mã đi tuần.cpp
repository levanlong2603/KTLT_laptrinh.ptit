#include<bits/stdc++.h>
using namespace std;

int n, k, x, y;
int X[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int Y[] = {1, -1, 2, -2, 2, -2, 1, -1};
int visited[20][20];

bool check(int x){
	return (1 <= x && x <= n);
}

void Try(int i, int x, int y){
	visited[x][y] = 1;
	for(int j = 0; j < 8; j++){
		if(i == k){
			return;
		}
		else if(check(x + X[j]) && check(y + Y[j])){
			Try(i + 1, x + X[j], y + Y[j]);
		}
	}
}


int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 0; i < 20; i++){
			for(int j = 0; j < 20; j++){
				visited[i][j] = 0;
			}
		}
		cin >> n >> k >> x >> y;
		Try(0, x, y);
		int cnt = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cnt += visited[i][j];
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
