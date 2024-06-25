#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int countGoodPrefixes(const vector<int>& arr) {
    unordered_set<long long> seenSums;
    long long runningSum = 0;
    int goodPrefixCount = 0;

    for (int num : arr) {
        runningSum += num;
        
        // Check if runningSum itself is good
        if (seenSums.count(runningSum / 2) && runningSum % 2 == 0) {
            ++goodPrefixCount;
        }
        
        // Add running sum to the set of seen sums
        seenSums.insert(runningSum);
    }
    
    return goodPrefixCount;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << countGoodPrefixes(arr) << endl;
    }

    return 0;
}
