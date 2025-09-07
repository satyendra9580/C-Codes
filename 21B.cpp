#include <bits/stdc++.h>
using namespace std;

vector<unsigned long long>solve(unsigned long long n){
    vector<unsigned long long>nums;
    unsigned long long pow10 = 10ULL;
    for (int k = 1; k <= 18 && pow10 <= n; ++k) {
            unsigned long long divi = pow10 + 1ULL; 
            if (n % divi == 0ULL) {
                nums.push_back(n / divi);
            }
            pow10 *= 10ULL; 
    }
    return nums;
}
int main() {
    int t;
    cin>>t;

    while (t--) {
        unsigned long long n;
        cin >> n;

        vector<unsigned long long> ans=solve(n);

        if (ans.empty()) {
            cout << 0 << endl;
        }else {
            sort(ans.begin(), ans.end());
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++) {
                if (i) cout << ' ';
                cout << ans[i];
            }
            cout << endl;
        }
    }
    return 0;
}
