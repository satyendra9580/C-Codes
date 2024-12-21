#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long x, y, n;
    cin >> x >> y >> n;

    // If y >= n, no valid i can exist because i > y is required
    if (y >= n) {
        cout << -1 << endl;
        return 0;
    }

    // Calculate x - y, as i must divide this value
    long v = x - y;

    // Find the largest i < n that satisfies the condition
    long res = -1;
    for (long i = n - 1; i > y; --i) {
        if (v % i == 0) { // Check if i divides v
            res = i;
            break;
        }
    }

    cout << res << endl;
    }
    
    return 0;
}
