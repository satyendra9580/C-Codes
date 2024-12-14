#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        // Sort x, y, z in non-decreasing order
        vector<int> values = {x, y, z};
        sort(values.begin(), values.end());

        // After sorting: values[2] is the maximum of x, y, z
        if (values[1] != values[2]) {
            cout << "NO" << endl;
        } else {
            // Valid case
            cout << "YES" << endl;
            // Assign values as:
            // a = values[2], b = values[0], c = values[1]
            cout << values[2] << " " << values[0] << " " << values[0] << endl;
        }
    }

    return 0;
}
