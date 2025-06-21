#include <bits/stdc++.h>
using namespace std;

bool is_inside(int u, int v, int x) {
    if (u < v)
        return x > u && x < v;
    else
        return x > u || x < v;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == b || c == d) {
            cout << "NO\n";
            continue;
        }

        bool red1 = is_inside(a, b, c), red2 = is_inside(a, b, d);
        if (red1 != red2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
