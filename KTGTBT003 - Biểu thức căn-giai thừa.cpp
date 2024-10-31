#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        
        double sum = 0.0;
        long long tl = 1;
        
        for (int i = 1; i <= n; ++i) {
            tl *= i;
            sum = pow(sum + tl, 1.0 / (i + 1));
        }
        
        cout << fixed << setprecision(3) << sum << " " << endl;
    }
    return 0;
}
