#include <bits/stdc++.h>
using namespace std;

int fibo (int n){
	int f1 = 1, f2 = 2, f = 3;
    // tim khoang canh tu fibo den n
    while(n > 0){
        f1 = f2; f2 = f;
        f = f1 + f2;
        n -= (f - f2 - 1);
    }
    n += (f - f2 - 1);
    return f2 + n;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int n ;
		cin >> n;
		cout << fibo(n) << endl;
	}
	return 0;
}
