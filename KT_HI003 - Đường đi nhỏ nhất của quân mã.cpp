#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;

int n;
int a[105][105];
int d[105][105];

int X[] = {0, -2, -2, -1, -1, 1, 1, 2, 2};
int Y[] = {0, -1, 1, -2, 2, -2, 2, -1, 1};

int check(int x, int y){
	if(0 <= x && x <= n && 0 <= y && y <= n){
		return 1;
	}
	return 0;
}

int Min_Path(int x1, int y1, int x2, int y2){
	queue<pair<int,int>> Q;
	Q.push({x1, y1});
	d[x1][y1] = a[x1][y1];
	while(!Q.empty()){
		int x = Q.front().first;
		int y = Q.front().second;
		Q.pop();
		for(int i = 1; i <= 8; i++){
			int xx = x + X[i];
			int yy = y + Y[i];
			if(check(xx, yy)){
				if(d[x][y] + a[xx][yy] < d[xx][yy]){
					d[xx][yy] = d[x][y] + a[xx][yy];
					Q.push({xx, yy});
				}
			}
		}
	}
	if(d[x2][y2] == 1e9) return -1;
	return d[x2][y2];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				d[i][j] = 1e9;
				cin >> a[i][j];
			}
		}
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << Min_Path(x1,y1,x2,y2) << endl;
	}
}
