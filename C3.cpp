#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<vector<int>> grid(n, vector<int>(n));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> grid[i][j];
            }
        }
        vector<int> p(2*n + 1, 0);
        for (int s = 2; s <= 2*n; s++){
            int i, j;
            if(s <= n+1){
                i = 1;
                j = s - 1;
            } else {
                i = s - n;
                j = n;
            }
            p[s] = grid[i-1][j-1]; 
        }
        vector<bool> vis(2*n + 1, false);
        for (int s = 2; s <= 2*n; s++){
            vis[p[s]] = true;
        }
        for (int x = 1; x <= 2*n; x++){
            if(!vis[x]){
                p[1] = x;
                break;
            }
        }
        for (int i = 1; i <= 2*n; i++){
            cout << p[i] << " ";
        }
        cout <<endl;
    }
    
    return 0;
}
