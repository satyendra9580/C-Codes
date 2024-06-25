#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        vector<int> arr(n);
        long long initial_sum = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            initial_sum += arr[i];
        }
        
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            l--; r--; // Convert to zero-based index
            
            long long segment_sum = 0;
            for (int i = l; i <= r; ++i) {
                segment_sum += arr[i];
            }
            
            long long new_segment_sum = (r - l + 1) * 1LL * k;
            long long new_sum = initial_sum - segment_sum + new_segment_sum;
            
            if (new_sum % 2 != 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}
