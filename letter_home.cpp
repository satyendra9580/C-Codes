#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        int mini = nums[0];
        int maxi = nums[n - 1];

        int steps = (maxi - mini) + min(abs(s - mini), abs(s - maxi));
        cout << steps << endl;
    }

    return 0;
}
