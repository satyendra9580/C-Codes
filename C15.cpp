#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        // Calculate maximum seating in row 1
        long long row1 = min(a, m);        
        long long row2 = min(b, m);        

        // Remaining seats in row 1 and row 2
        long long remaining1 = m - row1;
        long long remaining2 = m - row2;

        // Use no-preference monkeys (c) to fill remaining seats in both rows
        long long used_c = min(remaining1 + remaining2, c);

        // Total seated monkeys
        cout << row1 + row2 + used_c << endl;
    }
    return 0;
}
