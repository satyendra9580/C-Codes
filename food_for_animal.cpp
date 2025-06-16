#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int ax = min(a, x);
        int by = min(b, y);
        a -= ax;
        x -= ax;
        b -= by;
        y -= by;
        if (c >= x + y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}