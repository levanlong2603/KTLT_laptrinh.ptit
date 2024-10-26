#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >>t;
	while(t--){
		long long n, k , m;
        cin >> n >> k >> m;
        double x, y;
        x = 1.0 * k * log10(n);
        x -= (long long) x;
        y = pow(10, x);
        long long ans = y * pow(10, m - 1);
        cout << ans << endl; 
	}
	return 0;
}
