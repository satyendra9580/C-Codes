#include <iostream>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    // Check if modifying a can form an AP
    if ((2 * b - c) > 0 && (2 * b - c) % a == 0) {
        cout << "YES\n";
        return;
    }

    // Check if modifying b can form an AP
    if ((a + c) % 2 == 0 && ((a + c) / 2) % b == 0) {
        cout << "YES\n";
        return;
    }

    // Check if modifying c can form an AP
    if ((2 * b - a) > 0 && (2 * b - a) % c == 0) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
