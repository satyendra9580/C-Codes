#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for (int k = 2;k<32 ; k++) {
        // int sum = (1 << k) - 1; // 2^k - 1
        int sum=pow(2,k)-1;
        if (sum > n) break;
        if (n % sum == 0) {
            cout << n / sum << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
