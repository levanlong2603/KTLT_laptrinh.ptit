#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> a;

void dequy(int i, int s, int n, vector<int>& x) {
    if (i > n || s > n) return;
    if (s == n) {
        a.push_back(x);
        return;
    }
    for (int k = i; k < n; ++k) {
        if (s * k > n) return;
        if (n % k == 0) {
            x.push_back(k);
            dequy(k, s * k, n, x);
            x.pop_back();
        }
    }
}

void phantich(int n) {
    vector<int> x;
    a.clear();
    dequy(2, 1, n, x);
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        phantich(n);

        cout << a.size() << endl;
        for (const auto& sequence : a) {
            for (int value : sequence) {
                cout << value << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
