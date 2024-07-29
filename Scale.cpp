#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<vector<int>> grid(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }
        
        int block_size = n / k;
        vector<vector<int>> reduced(k, vector<int>(k));
        
        for (int bi = 0; bi < k; ++bi) {
            for (int bj = 0; bj < k; ++bj) {
                int start_i = bi * block_size;
                int start_j = bj * block_size;
                int value = grid[start_i][start_j];
                bool consistent = true;
                
                for (int i = start_i; i < start_i + block_size && consistent; ++i) {
                    for (int j = start_j; j < start_j + block_size; ++j) {
                        if (grid[i][j] != value) {
                            consistent = false;
                            break;
                        }
                    }
                }
                
                reduced[bi][bj] = value;
            }
        }
        
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < k; ++j) {
                cout << reduced[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
