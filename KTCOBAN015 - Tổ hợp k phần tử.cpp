#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll tinh_to_hop(int n, int k) {
    ll res = 1;
    for (int i = 1; i <= k; i++, n--) {
        res = res * n / i;
    }
    return res;
}

int n, k, a[100];

void kt() {
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

bool sinh() {
    int i = k;
    while (i > 0 && a[i] == n - k + i) {
        --i;
    }
    if (i > 0) {
        ++a[i];
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << tinh_to_hop(n, k) << "\n";
        kt();
        do {
        	cout<<"[";
            for (int i = 1; i <= k-1; i++) {
                cout << a[i] << " ";
            }
            cout<<a[k]<<"]";
            cout << "\n";
        } while (sinh());
    }

    return 0;
}
