#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        // Print alternating '0' and '1' to balance the string
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                cout << '0';
            } else {
                cout << '1';
            }
        }
        cout << '\n';
    }
}

int main() {
    solve();
    return 0;
}
