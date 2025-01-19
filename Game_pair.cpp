#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        // Count the frequency of each number
        unordered_map<int, int> freq;
        for (int num : x) {
            freq[num]++;
        }

        int score = 0;

        // Iterate through each unique number
        for (auto& [num, count] : freq) {
            if (num > k - num) {
                continue; // Avoid double-counting pairs
            }

            if (num == k - num) {
                // Handle the case where num == k - num (e.g., num = k/2)
                score += count / 2;
            } else if (freq.find(k - num) != freq.end()) {
                // Add the minimum of the counts of num and k - num
                score += min(count, freq[k - num]);
            }
        }

        // Output the score
        cout << score << endl;
    }

    return 0;
}