#include <bits/stdc++.h>
using namespace std;
using u128 = __int128_t;
using u64  = unsigned long long;


u64 sumDigitsTo(u64 N) {
    if (N == 0) return 0;
    u128 res = 0;
    u64 factor = 1;
    while (factor <= N) {
        u64 nextFactor = factor * 10ULL;
        u64 high = N / nextFactor;
        u64 cur  = (N / factor) % 10ULL;
        u64 low  = N % factor;

        res += (u128)high * 45ULL * (u128)factor;
        res += (u128)cur * (u128)(low + 1ULL);
        res += (u128)((cur * (cur - 1ULL)) / 2ULL) * (u128)factor;

        if (factor > (u64)(~(u64)0) / 10ULL) break; 
        factor = nextFactor;
    }
    return (u64)res;
}

int main() {

    int t;
    cin>>t;
    
    while (t--) {
        unsigned long long k;
        cin >> k;

        unsigned long long remaining = k;
        unsigned long long ans = 0;

        for (int d = 1; remaining > 0; ++d) {
            unsigned long long start = (d == 1 ? 1ULL : (unsigned long long)pow(10, d-1));
            unsigned long long cnt = 9ULL * (unsigned long long)pow(10, d-1);
            u128 totalDigits128 = (u128)cnt * (u128)d;
            if (totalDigits128 <= remaining) {
                unsigned long long endNum = start + cnt - 1ULL;
                u64 blockSum = sumDigitsTo(endNum) - sumDigitsTo(start - 1ULL);
                ans += blockSum;
                remaining -= (unsigned long long)totalDigits128;
            } else {
                unsigned long long fullNums = remaining / d; 
                unsigned long long r = remaining % d;
                if (fullNums > 0) {
                    unsigned long long A = start;
                    unsigned long long B = start + fullNums - 1ULL;
                    u64 sumFull = sumDigitsTo(B) - sumDigitsTo(A - 1ULL);
                    ans += sumFull;
                }
                if (r > 0) {
                    unsigned long long X = start + fullNums; 
                    string s = to_string(X);
                    for (unsigned i = 0; i < r; ++i) ans += (s[i] - '0');
                }
                remaining = 0;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
