#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
int calculateMaxEarnings(int n, int k, const vector<pair<int, int>>& bottles) {
    unordered_map<int, vector<int>> brandPrices;
    for (const auto& bottle : bottles) {
        int brand = bottle.first;
        int price = bottle.second;
        brandPrices[brand].push_back(price);
    }
    vector<int> maxPrices;
    for (const auto& entry : brandPrices) {
        vector<int> prices = entry.second;
        sort(prices.rbegin(), prices.rend());
        for (int i = 0; i < min(n, (int)prices.size()); i++) {
            maxPrices.push_back(prices[i]);
        }
    }
    sort(maxPrices.rbegin(), maxPrices.rend());
    int totalEarnings = 0;
    for (int i = 0; i < min(n, (int)maxPrices.size()); i++) {
        totalEarnings += maxPrices[i];
    }

    return totalEarnings;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> bottles(k);
        for (int i = 0; i < k; i++) {
            int brand, cost;
            cin >> brand >> cost;
            bottles[i] = {brand, cost};
        }

        int result = calculateMaxEarnings(n, k, bottles);
        cout << result << endl;
    }

    return 0;
}
