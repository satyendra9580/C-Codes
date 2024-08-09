#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, int>> intervals(n);
    int covered = 0;

    // Reading intervals
    for (int i = 0; i < n; ++i) {
        int first, second;
        cin >> first >> second;
        intervals[i] = make_pair(first, second);
    }

    // Calculate the total covered length
    sort(intervals.begin(), intervals.end());
    int last_end = -1;

    for (const auto& interval : intervals) {
        if (interval.first > last_end) {
            covered += (interval.second - interval.first + 1);
        } else if (interval.second > last_end) {
            covered += (interval.second - last_end);
        }
        last_end = max(last_end, interval.second);
    }

    // Determine if we can fit `s` items in the remaining space
    if (covered >= s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
