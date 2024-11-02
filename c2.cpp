#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    
    // Store bottles of each brand with their costs
    vector<vector<ll>> brands(k + 1);
    
    for(int i = 0; i < k; i++) {
        int brand, cost;
        cin >> brand >> cost;
        brands[brand].push_back(cost);
    }
    
    // Sort costs in descending order for each brand
    for(int i = 1; i <= k; i++) {
        sort(brands[i].begin(), brands[i].end(), greater<ll>());
    }
    
    // Create vector of pairs (sum, count) for each brand
    vector<pair<ll, int>> brandSums;
    for(int i = 1; i <= k; i++) {
        if(brands[i].empty()) continue;
        
        ll sum = 0;
        for(ll cost : brands[i]) {
            sum += cost;
        }
        brandSums.push_back({sum, (int)brands[i].size()});
    }
    
    // Sort brands by average value (sum/count) in descending order
    sort(brandSums.begin(), brandSums.end(), 
         [](const pair<ll, int>& a, const pair<ll, int>& b) {
             return (double)a.first/a.second > (double)b.first/b.second;
         });
    
    // Take the top n brands or fewer if we have less distinct brands
    ll result = 0;
    int usedShelves = 0;
    
    for(const auto& [sum, count] : brandSums) {
        if(usedShelves >= n) break;
        result += sum;
        usedShelves++;
    }
    
    cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}