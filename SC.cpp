#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m; 
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        long long B; 
        cin >> B;
        
        bool flag = true;
        long long curr = -1000000000000000000LL; 
        
        for (int i = 0; i < n; i++){
            long long l = min(a[i], B - a[i]);
            long long h = max(a[i], B - a[i]);

            if(l >= curr){
                curr = l;
            } else if(h >= curr){
                curr = h;
            } else {
                flag = false;
                break;
            }
        }
        
        cout << (flag ? "YES" : "NO") << "\n";
    }
    
    return 0;
}

