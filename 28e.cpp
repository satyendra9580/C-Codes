#include <bits/stdc++.h>
using namespace std;

long long solve(long long r, const vector<long long>& a, long long x) {
    int n = a.size();
    vector<pair<long long, long long>> four;
    for (auto pos : a) {
        long long l = max(0LL, pos - r + 1);
        long long ror = min(x, pos + r - 1);
        if (l <= ror) four.emplace_back(l, ror);
    }
    if (four.empty()) return x + 1;
    sort(four.begin(), four.end());
    vector<pair<long long, long long>> jodna;
    auto [col, cor] = four[0];
    for (size_t i = 1; i < four.size(); ++i) {
        auto [nol, nor] = four[i];
        if (nol <= cor + 1) {
            cor = max(cor, nor);
        } else {
            jodna.emplace_back(col, cor);
            col = nol;
            cor = nor;
        }
    }
    jodna.emplace_back(col, cor);
    long long forB = 0;
    for (auto [l, rr] : jodna) {
        forB += rr - l + 1;
    }
    return x + 1 - forB;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long k, x;
        cin >> n >> k >> x;
        vector<long long> nums(n);
        for (auto& v : nums) cin >> v;
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        nums.resize(it - nums.begin());
        long long low = 0, high = x + 1;
        while (low < high) {
            long long mid = (low + high + 1) / 2;
            long long sz = solve(mid, nums, x);
            if (sz >= k) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        long long maxR = low;
        vector<pair<long long, long long>> four;
        for (auto pos : nums) {
            long long l = max(0LL, pos - maxR + 1);
            long long rr = min(x, pos + maxR - 1);
            if (l <= rr) four.emplace_back(l, rr);
        }
        sort(four.begin(), four.end());
        vector<pair<long long, long long>> jodna;
        if (!four.empty()) {
            auto [cl, cr] = four[0];
            for (int i = 1; i < four.size(); ++i) {
                auto [nl, nr] = four[i];
                if (nl <= cr + 1) {
                    cr = max(cr, nr);
                } else {
                    jodna.emplace_back(cl, cr);
                    cl = nl;
                    cr = nr;
                }
            }
            jodna.emplace_back(cl, cr);
        }
        vector<pair<long long, long long>> swikaar;
        long long cur = 0;
        for (auto [fill, fur] : jodna) {
            if (cur < fill) {
                swikaar.emplace_back(cur, fill - 1);
            }
            cur = fur + 1;
        }
        if (cur <= x) {
            swikaar.emplace_back(cur, x);
        }
        vector<long long> jagah;
        long long gredd = k;
        for (auto [sl, sr] : swikaar) {
            if (sl > sr) continue;
            long long lambai = sr - sl + 1;
            long long lena = min(gredd, lambai);
            for (long long i = 0; i < lena; i++) {
                jagah.push_back(sl + i);
                gredd--;
                if (gredd == 0) break;
            }
            if (gredd == 0) break;
        }
        for (int i = 0; i < jagah.size(); i++) {
            if (i > 0) cout << " ";
            cout << jagah[i];
        }
        cout << endl;
    }
    return 0;
}