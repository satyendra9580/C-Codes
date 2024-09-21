#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    
    vector<int> v(n); // Initialize vector with size n
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < n; i++) {
        bool flag = false;
        
        // Check the left side
        for (int j = i - 1; j >= max(i - x, 0); j--) {
            if (v[j] <= v[i]) {
                flag = true;
                break;
            }
        }
        
        // If flag is set, it means v[i] is not a local minimum
        if (flag) continue;
        
        // Check the right side
        for (int j = i + 1; j <= min(i + y, n - 1); j++) {
            if (v[j] <= v[i]) {
                flag = true;
                break;
            }
        }
        
        // If flag is still false, this is a local minimum, print and exit
        if (!flag) {
            cout << i + 1 << endl; // 1-based index
            return 0; // Exit the program
        }
    }
    
    // If no local minimum is found, you might want to output something
    // Uncomment the next line if you want to indicate no local minimum was found
    // cout << -1 << endl;
    
    return 0;
}
