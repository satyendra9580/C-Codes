#include <bits/stdc++.h>
using namespace std;

// Function to check if there's a "1100" pattern in a substring
bool checkPattern(const string& s, int pos) {
    int n = s.size();
    // Check from pos-3 to pos+3 for the "1100" pattern
    for (int i = max(0, pos - 3); i <= min(n - 4, pos); i++) {
        if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;

        // Initialize whether "1100" pattern exists in the initial string
        bool hasPattern = checkPattern(s, 0);

        while(q--) {
            int i, v;
            cin >> i >> v;
            i--; // Convert to 0-based indexing
            
            // Only proceed if there is a change
            if (s[i] != '0' + v) {
                // Check if "1100" pattern is near the updated position before the change
                if (hasPattern && checkPattern(s, i)) {
                    hasPattern = false;  // Tentatively unset, will be checked after update
                }
                
                // Apply the update
                s[i] = '0' + v;

                // Recheck for "1100" pattern near the updated position after the change
                if (!hasPattern) {
                    hasPattern = checkPattern(s, i);
                }
            }

            // Output the result based on the current state of hasPattern
            cout << (hasPattern ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}
