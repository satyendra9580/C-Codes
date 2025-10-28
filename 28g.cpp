#include <bits/stdc++.h>
using namespace std;

long long helper(const vector<long long>& a, const vector<long long>& c) {
    int n = a.size();
    vector<long long> pahle(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pahle[i] = pahle[i - 1] + c[i - 1];
    }
    vector<long long> dp(n);
    for (int i = 0; i < n; i++) {
        long long miniV = 0;
        for (int j = 0; j < i; j++) {
            if (a[j] <= a[i]) {
                miniV = min(miniV, dp[j] - pahle[j + 1]);
            }
        }
        dp[i] = pahle[i] + miniV;
    }
    long long miniSub = 0;
    for (int i = 0; i < n; i++) {
        miniSub = min(miniSub, dp[i] - pahle[i + 1]);
    }
    return pahle[n] + miniSub;
}

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        vector<long long> nums(n);
        for (auto& x : nums){
            cin >> x;
        } 
        vector<long long> res(n);
        for (auto& x : res) cin >> x;
        cout << helper(nums, res) << endl;
    }
    return 0;
}