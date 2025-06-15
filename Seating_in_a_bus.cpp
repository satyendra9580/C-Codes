#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<bool> occupied(n + 2, false);
        bool valid = true;

        for (int i = 0; i < n; i++) {
            int seat = a[i];  

            if (i == 0) {
                occupied[seat] = true;
                continue;
            }

            bool leftOccupied  = (seat > 1 && occupied[seat - 1]);
            bool rightOccupied = (seat < n && occupied[seat + 1]);

            if (!leftOccupied && !rightOccupied) {
                valid = false;
                break;
            }

            occupied[seat] = true;
        }

        cout << (valid ? "Yes\n" : "No\n");
    }

    return 0;
}
