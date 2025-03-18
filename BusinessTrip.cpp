#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    vector<int> growth(12);
    for (int i = 0; i < 12; ++i) {
        cin >> growth[i];
    }

    if (k == 0) {
        cout << 0 << endl;
        return 0;
    }

    sort(growth.rbegin(), growth.rend());

    int totalGrowth = 0;
    int months = 0;

    for (int i = 0; i < 12; ++i) {
        totalGrowth += growth[i];
        months++;
        if (totalGrowth >= k) {
            cout << months << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}