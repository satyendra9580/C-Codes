#include <bits/stdc++.h>
using namespace std;

string toString(long long x) {
    if (x == 0) return "0";
    bool negative = false;
    if (x < 0) { negative = true; x = -x; }
    string s;
    while (x > 0) {
        int digit = (int)(x % 10);
        s.push_back('0' + digit);
        x /= 10;
    }
    if (negative) s.push_back('-');
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int t;
    cin>>t;

    const int badaP = 60;
    vector<long long> pow3(badaP+1);
    pow3[0] = 1;
    for (int i = 1; i <= badaP; ++i) pow3[i] = pow3[i-1] * 3;

    while (t--) {
        long long kuchhNahi, k_ll;
        cin >> kuchhNahi >> k_ll;
        long long n = kuchhNahi, k = k_ll;

        if (k >= n) {
            long long ans = (long long)3 * (long long)n;
            cout << toString(ans) << endl;
            continue;
        }

        vector<long long> cnt(badaP+2, 0);
        cnt[0] = n;
        long long deals = n;
        long long cost = (long long)3 * (long long)n; 

        for (int x = 0; x <= badaP && deals > k; ++x) {
            long long milnaPossible = cnt[x] / 3;
            if (milnaPossible == 0) continue;

            long long needMerges = (deals - k + 1) / 2; 
            long long KaroMerges = min(milnaPossible, needMerges);

            cnt[x] -= KaroMerges * 3LL;
            cnt[x+1] += KaroMerges;
            deals -= KaroMerges * 2LL;
            cost += (long long)KaroMerges * pow3[x];
        }
        if (deals > k) {
            cout << -1 << endl;
        } else {
            cout << toString(cost) << endl;
        }
    }
    return 0;
}
