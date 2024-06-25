//Question

// A progressive square of size n is an n*n matrix. Maxim chooses three integers a1,1 c and d and constructs a progressive square according to the following rules:
// ai+1,j=ai,j+c
// ai,j+1=ai,j+d

// Last month Maxim constructed a progressive square and remembered the values of n, c, and d. Recently, he found an array b
// of n2 integers in random order and wants to make sure that these elements are the elements of that specific square.

// It can be shown that for any values of n, a1,1, c, and d, there exists exactly one progressive square that satisfies all the rules.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> b(n * n);
        
        for (int i = 0; i < n * n; ++i) {
            cin >> b[i];
        }
        
        // Sort the input array
        sort(b.begin(), b.end());

        // Construct the expected values matrix starting from the minimum value
        int a11 = b[0];  // Start from the smallest value in the sorted array
        vector<int> expected_values(n * n);
        
        int index = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                expected_values[index++] = a11 + i * c + j * d;
            }
        }

        // Sort the expected values
        sort(expected_values.begin(), expected_values.end());

        // Compare the sorted arrays
        bool is_possible = (b == expected_values);
        
        if (is_possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
